#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<char> vchar;
typedef vector<string> vstr;
typedef vector<pll> vpll;
typedef map<ll,ll> mll;
typedef map<string,ll> mstrl;

#define endl '\n'
#define Parvez ios_base::sync_with_stdio(false);
#define Ali cin.tie(NULL); cout.tie(NULL);
#define all(x) x.begin(),x.end()
const ll mod = 998244353;

void YES(){cout<<"YES"<<endl;}
void NO(){cout<<"NO"<<endl;}
void MINUS(){cout<<-1<<endl;}

void print(){cout<<endl;}template<typename T,typename... A>void print(const T& a,const A&... z){cout<<a<<' ';print(z...);}
void input(){}template<typename T,typename... A>void input(T& a,A&... z){cin>>a;input(z...);}
template<typename T>void print(vector<T>& v){for(auto& i:v)cout<<i<<' ';cout<<endl;}
template<typename T,typename S>void print(vector<T>& v,S s){for(auto& i:v)cout<<i<<s;}
template<typename T>void input(vector<T> &v){for(auto& i:v)cin>>i;}


void solution(ll &T){
	ll n;
	cin >> n;
	vpll v(n);
	for (ll i = 0; i < n; i++)
		input(v[i].first,v[i].second);

	ll cnt = 0;
	for (ll i = 0; i < n; i++)
		for (ll j = 0; j < n; j++)
			if (i != j and v[i].first == v[j].second){
				cnt++;break;
			}
	print(n-cnt);
}

signed main(){
	Parvez Ali
	ll TT=1;
	// cin>>TT;
	for(ll T=1;T<=TT;T++)
		solution(T);
	return 0;
}