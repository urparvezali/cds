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
    string s,ss;
    cin>>s>>ss;
    ll a= stoi(s);
    ll b= stoi(ss);
    ll d1=0,d2=0;
    for (int i = 0; i < s.length(); i++)
    {
        d1=d1+(a%10)*pow(2,i);
        a=a/10;
        d2=d2+(b%10)*pow(2,i);
        b=b/10;
    }
    ll d=abs(d1-d2); vector<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (d == 0)
        {
            st.push_back('0');
        }
        else if (d==1)
        {
            st.push_back('1');
        }
        else if (d%2==1)
        {
            st.push_back('0');
        }
        else if (d%2==0)
        {
            st.push_back('1');
        }
        d=d/2;
    }
    ll l= st.size();
    for (int i = 0; i < l; i++)
    {
        cout<<st.back();
        st.pop_back();
    }

    return 0;
}