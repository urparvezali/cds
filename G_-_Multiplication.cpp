// Parvez Ali, ICE-13 of PUST
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vint;
typedef vector<string> vstr;
typedef vector<ll> vll;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)

int main(){
    IOS;
    ll num;
    double b;
    cin>>num>>b;

    string s;
    s=to_string(num*b);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='.')
        {
            s.erase(i,(s.length()-i));
            break;
        }
    }
    cout<<s<<endl;
    return 0;
}