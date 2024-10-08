#include <algorithm>
#include <bits/stdc++.h>
#include <numeric>
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

inline void Parvez(){ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); }
inline void print(){ cout<<endl; }template<class H,class... T>inline void print(H&& h,T &&...t){ cout<<h;if(sizeof...(t)!=0)cout<<' ';print(forward<T>(t)...); }template<class T>inline void print(vector<T>& v){ for(auto& i:v){ cout<<i;if(&i!=&v.back())cout<<' '; }cout<<endl; }inline void input(){}template<class H,class... T>inline void input(H&& h,T &&...t){ cin>>h;input(forward<T>(t)...); }template<class T>inline void input(vector<T>& v){ for(auto& i:v)cin>>i; }




void solution(ll& T){
    ll n; input(n);
    vll v(n); input(v);
    for(ll i = 2; i <=1000000000000000000LL; i*=2){
        set<ll> st;
        for(ll j = 0; j < n; j++){
            st.insert(1LL*v[j]%i);
            if(st.size()>2) break;
        }
        if(st.size()==2LL){
            print(i);
            // for(auto& x:v)x%=i;
            // print(v);
            return;
        }
    }
}

int32_t main(){
    Parvez();
    ll TT=1;
    cin>>TT;
    for(ll T=1;T<=TT;T++)
        solution(T);
    return 0;
}