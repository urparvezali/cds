 
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
void Y(){cout<<"YES"<<endl;}
void N(){cout<<"NO"<<endl;}
void IOS(){ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
const ll mod = 1e9+7;

ll bin_to_dec(std::string s)
{
    ll dec = 0;
    for (ll i = 0; i < s.size(); ++i)
    {
        if (s[i] == '1')
        {
            dec += 1 << (s.size() - 1 - i);
        }
    }
    return dec;
}
void solution()
{
    ll n; cin>>n;

    vchar v(n); for(auto &x: v) cin>>x;

    string s;

    for (ll i = 0; i < v.size(); i++)
    {
        s+=v[i];
    }

    cout<<bin_to_dec(s)<<endl;
}


int main()
{
    IOS();
    ll tc; tc=1;
    cin>>tc;
    while(tc--)
        solution();
    return 0;
}