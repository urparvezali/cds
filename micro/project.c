void init(){
        ADCON1 = 0x07;
        trisb = trisc = 0x00;
        trisd = 0xf0;
        trisa = 0b000000;
        trise = 0b000;

        portb = portc = 0x00;
        portd = 0b000000;
        porta = 0x00;
        porte = 0b000;
}

unsigned int arr[] = { 0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F };
unsigned int mode = 1;
unsigned int digit0 = 0;
unsigned int digit1 = 0;
unsigned int on_time = 0;
unsigned int off_time = 0;
unsigned int channels = 0;

unsigned int read_int(unsigned int add){
        return EEPROM_Read(add) | (EEPROM_Read(add+1) << 8);
}
void write_int(unsigned int add, unsigned int val){
        EEPROM_Write(add, (val & 0xff));
        EEPROM_Write(add+1, ((val >> 8) & 0xff));
}

void get_mode(){
        if (portd.f4){
                mode = 1;
        } else{
                mode = 0;
        }
}
void read_rom(){
        on_time = read_int(0x00);
        off_time = read_int(0x02);
        channels = read_int(0x04);
}
void write_rom(){
        write_int(0x00, on_time);
        write_int(0x02, off_time);
        write_int(0x04, channels);
}
void led0(unsigned int value){
        digit1 = value%10;
        digit0 = value/10;

        porta.f1 = 1;
        portb = arr[digit0];
        porta.f0 = 0;

        delay_ms(5);

        porta.f0 = 1;
        portb = arr[digit1];
        porta.f1 = 0;

        delay_ms(5);
}
void led1(unsigned int value){
        digit1 = value%10;
        digit0 = value/10;

        porta.f3 = 1;
        portc = arr[digit0];
        porta.f2 = 0;

        delay_ms(5);

        porta.f2 = 1;
        portc = arr[digit1];
        porta.f3 = 0;

        delay_ms(5);
}

void program_mode(){
        unsigned int counter = 0;
        on_time = 0;
        off_time = 0;
        channels = 0;
        // for changing on time
        porte = 0b001;

        while (1){
                // detect change of state
                if (portd.f5){
                        while (portd.f5){
                                counter += 1;
                                delay_ms(5);
                        };
                        if (counter>=200){
                                break;
                        }

                }
                if (portd.f6){
                        while (portd.f6) delay_ms(5);
                        on_time += on_time<99 ? 1 : 0;
                }
                if (portd.f7){
                        while (portd.f7) delay_ms(5);
                        on_time -= on_time>0 ? 1 : 0;
                }
                led0(on_time);
                led1(channels);
        }
        // for changing off time
        counter = 0;
        porte = 0b010;
        while (1){
                // detect change of state
                if (portd.f5){
                        while (portd.f5){
                                counter += 1;
                                delay_ms(5);
                        };
                        if (counter>=200){
                                break;
                        }
                }
                if (portd.f6){
                        while (portd.f6) delay_ms(5);
                        off_time += 1;
                }
                if (portd.f7){
                        while (portd.f7) delay_ms(5);
                        off_time -= off_time>0 ? 1 : 0;
                }
                led0(off_time);
                led1(channels);
        }
        // for changing channels
        counter = 0;
        porte = 0b100;
        while (1){
                // detect change of state
                if (portd.f5){
                        while (portd.f5){
                                counter += 1;
                                delay_ms(5);
                        };
                        if (counter>=200){
                                break;
                        }
                }
                if (portd.f6){
                        while (portd.f6) delay_ms(5);
                        channels += channels<16 ? 1 : 0;
                }
                if (portd.f7){
                        while (portd.f7) delay_ms(5);
                        channels -= channels>0 ? 1 : 0;
                }
                led0(0);
                led1(channels);
        }
        write_rom();
        porte = 0b111;
}

void run_mode(){
        unsigned int i = 0;
        unsigned int j = 0;
        unsigned int k = 0;
        porte = 0b111;

        while (1){
                for (i = 0; i<channels; i++){
                        porta.f5 = 1;
                        portd = i;

                        for (j = 0; j<on_time; j++){
                                for (k = 0; k < 5; k++){
                                        led0(0);
                                        led1(i+1);
                                }
                        }
                        porta.f5 = 0;
                        for (j = 0; j<off_time; j++){
                                for (k = 0; k < 50; k++){
                                        led0(off_time-j);
                                        if (i+1==channels) led1(1);
                                        else led1(i+2);
                                }
                        }
                }
        }
}

void main(){
        init();
        get_mode();
        read_rom();
        if (mode){
                program_mode();
        }
        run_mode();
}