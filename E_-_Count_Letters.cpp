// Parvez Ali, ICE-13 of PUST
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef vector<char> vchar;
typedef vector<string> vstr;
#define endl '\n'
#define mod (1e9+7)
void Y(){cout<<"YES"<<endl;}
void N(){cout<<"NO"<<endl;}
void IOS(){ios_base::sync_with_stdio(false); cin.tie(NULL);}

int main(){
    IOS();
    string s; cin>>s;
    set <char> sc;
    for (int i = 0; i < s.length(); i++)
    {
        sc.insert(s[i]);
    }

    int a[sc.size()];
    //set<char>::iterator it;
    for (int i = 0; i < sc.size(); i++)
    {
        char ch = *next(sc.begin(),i);
        a[i]=count(s.begin(),s.end(),ch);
    }
    
    for (int i = 0; i < sc.size(); i++)
    {
        cout<<*next(sc.begin(),i)<<" : "<<a[i]<<endl;
    }
    

    return 0;
}