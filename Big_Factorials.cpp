// Parvez Ali, ICE-13 of PUST
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vint;
typedef vector<string> vstr;
typedef vector<ll> vll;
#define endl "\n"
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    IOS;
    ll c, n, fact = 1;
    cin >> n;
    ll m=(1e9+7);
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i;
        fact = fact % m;
    }
    string s = to_string(fact%m);
    if (s.length()>4)
    {
        s.erase(0,s.length()-4);
    }
    cout<<s<<endl;
    return 0;
}