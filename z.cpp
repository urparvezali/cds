// Parvez Ali, ICE-13 of PUST
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vint;
typedef vector<string> vstr;
typedef vector<ll> vll;
#define endl "\n"
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL)
void vout(vector<vector<int>> &v){
        for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    IOS;
    vector<vint> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(vint ());
        for (int j = 0; j < 4; j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
    vout(v);
    return 0;
}