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


void solution()
{
    string s; getline(cin,s);
    s.erase(0,1); s.erase(s.length()-1,1);
    set<char>ss;
    for (ll i = 0; i < s.length(); i+=3)
    {
        ss.insert(s[i]);
    }
    cout<<ss.size()<<endl;
}


int main()
{
    IOS();
    ll tc; tc=1;
    // cin>>tc;
    while(tc--)
        solution();
    return 0;
}