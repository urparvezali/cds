#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<bool> vbl;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<string> vstr;
typedef vector<pll> vpll;

#define endl '\n'
#define all(x) x.begin(),x.end()
constexpr ll mod = 1000000007;

inline void Parvez(){ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
inline void YES(){cout<<"YES"<<endl;}
inline void NO(){cout<<"NO"<<endl;}
inline void MINUS(){cout<<-1<<endl;}
inline void print(){cout<<endl;}template<class H,class... T>inline void print(H &&h,T &&...t){cout<<h;if(sizeof...(t)!=0)cout<<' ';print(forward<T>(t)...);}template<class T>inline void print(vector<T> &v){for(auto &i:v){cout<<i;if(&i!=&v.back())cout<<' ';}cout<<endl;}inline void input(){}template<class H,class... T>inline void input(H &&h,T &&...t){cin>>h;input(forward<T>(t)...);}template<class T>inline void input(vector<T> &v){for(auto &i:v)cin>>i;}




void solution(ll &T){
    ll n; input(n);
    string s; input(s);
    ll res=0;
    vll mp(27);
    for (ll i = 0; i < s.size(); i++){
        mp[s[i]-65]++;
    }
    for (ll i = 0; i < 27; i++){
        if(mp[i]>i) res++;
    }
    print(res);
}

int32_t main(){
    Parvez();
    ll TT=1;
    cin>>TT;
    for(ll T=1;T<=TT;T++)
        solution(T);
    return 0;
}