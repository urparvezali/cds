// Parvez Ali, ICE-13 of PUST
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vint;
typedef vector<string> vstr;
typedef vector<ll> vll;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
#define mod (1e9+7)

int main(){
    IOS;
    int t;
    cin>>t;
    while (t--)
    {   
        int n;cin>>n;
        
        n=round(n);
        if (n<=33)
        {
            cout<<33<<endl;
        }
        else if (n<=40)
        {
            cout<<40<<endl;
        }
        else if (n<=67)
        {
            cout<<67<<endl;
        }
        else cout<<75<<endl;
        
    }
    return 0;
}