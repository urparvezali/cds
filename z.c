#include <stdio.h>
#include <stdlib.h>

void main(){
    long n; scanf("%lf",&n);
    long ar[n];
    long sum = 0;
    for (long i = 0; i < n; i++)
    {
        scanf("%lf",&ar[i]);
        sum+=ar[i];
    }
    sum = abs(sum);
    printf("%lf\n",sum);
}
