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

inline void print(){cout<<endl;}template<typename T,typename... A>inline void print(const T& a,const A&... z){cout<<a<<' ';print(z...);}template<typename T>inline void print(vector<T>& v){for(auto& i:v)cout<<i<<' ';cout<<endl;}template<typename T,typename S>inline void print(vector<T>& v,S s){for(auto& i:v)cout<<i<<s;}inline void input(){}template<typename T,typename... A>inline void input(T& a,A&... z){cin>>a;input(z...);}template<typename T>inline void input(vector<T>& v){for(auto& i:v)cin>>i;}
#define print(...) print(__VA_ARGS__);
#define input(...) input(__VA_ARGS__);

void solution(ll &T){
    ll n; input(n); vll v(n); input(v);
    ll ans=0;
    for (ll i = 1; i < n; i++){
        if(v[i]<v[i-1]){
            ans+=(v[i-1]-v[i]);
            v[i]=v[i-1];
        }
    }
    print(ans)
}

signed main(){
    Parvez();
    ll TT=1;
    // cin>>TT;
    for(ll T=1;T<=TT;T++)
        solution(T);
    return 0;
}