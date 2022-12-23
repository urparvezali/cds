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
    ll n;
    cin>>n;
    float x;
    x = (log(n)/log(2));
    int y = x;
    if (y-x==0)
    {
        Y();
    }
    else N();
    // solution by bitwise operation
    // (n&(n-1)==0)? Y(): N();
    return 0;
}