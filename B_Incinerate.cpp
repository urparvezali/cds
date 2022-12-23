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
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,k;
        cin>>n>>k;
        ll h[n],p[n];
        for(ll &i:h){cin>>i;}
        for(ll &j:p){cin>>j;}

        while (k)
        {
            for (ll i = 0; i < n; i++)
            {
                h[i]-=k;
            }
            ll mintok=-1;
            for (ll i = 0; i < n-1; i++)
            {
                if (h[i]>0)
                {
                    if(h[i]<h[i+1]){mintok=i;}
                }
            }
            k=k-p[mintok];
        }
        int tok=0;
        for (ll i = 0; i < n; i++)
        {
            if (h[i]!=0)
            {
                N(); tok++;
                break;
            }
            tok=0;
        }
        if (tok==0)
        {
            Y();
        }
        
    }
    
    return 0;
}