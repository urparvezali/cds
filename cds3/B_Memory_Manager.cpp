#include <bits/stdc++.h>
#define M_PI 3.14159265358979323846ll
#define ff(i, s, n) for (int i = (s); i < (n); i++)
#define fr(i, s, n) for (int i = (n)-1; i >= (s); i--)
#define FF(i, s, n) for (int i = (s); i <= (n); i++)
#define Fr(i, s, n) for (int i = (n); i >= (s); i--)
#define FR(i, s, n) for (int i = (n); i >= (s); i--)
#define all(a) a.begin(), a.end()
#define tnm typename
#define invd inline int
#define templ1 template <tnm T>
#define btempl templ1 invd
#define ln prln()
#define sp prsp()
using namespace std;
void init(string name)
{
	string path = "../../../Downloads/" + name + ".in";
	string out = name + ".out";
	freopen(path.c_str(), "r", stdin);
	freopen(out.c_str(), "w", stdout);
}

invd init(int n)
{
	char buff[100];
	sprintf(buff, "xx/%d.txt", n);
#ifndef ONLINE_JUDGE
	freopen(buff, "r", stdin);
#endif
}
typedef int64_t ll;
typedef unsigned int uint;
invd scan(char &s)
{
	int c;
	while ((c = getchar()) == '\n' || c == ' ' || c == '\r')
		;
	s = c;
};
invd pr(ll i) { printf("%" PRId64, i); }
invd scan(int &i) { return scanf("%d", &i); }
invd scan(double &i) { return scanf("%lf", &i); }
invd scan(ll &i) { return scanf("%" PRId64, &i); }
invd pr(const string &s) { ff(i, 0, s.size()) putchar(s[i]); }
invd scan(string &s)
{
	int c;
	while ((c = getchar()) == '\n' || c == ' ' || c == '\r')
		;
	do
	{
		switch (c)
		{
		case '\n':
		case ' ':
		case '\r':
		case EOF:
			return 0;
		default:
			s += c;
		}
	} while ((c = getchar()) != EOF);
	return s.size();
};
invd scanln(string &s)
{
	int c;
	while ((c = getchar()) == '\n' || c == ' ' || c == '\r')
		;
	do
	{
		switch (c)
		{
		case '\n':
		case '\r':
		case EOF:
			return 0;
		default:
			s += c;
		}
	} while ((c = getchar()) != EOF);
	return s.size();
};
invd pr(char c) { putchar(c); };
invd pr(const char *c)
{
	while (*c != 0)
		putchar(*c++);
}
invd pr(int i) { printf("%d", i); }
invd pr(bool b) { pr((int)b); }
invd pr(double d) { printf("%.9lf", d); }
invd prln() { putchar('\n'); }
invd prsp() { putchar(' '); }
btempl scan(char *s)
{
	int c;
	while ((c = getchar()))
	{
		switch (c)
		{
		case '\n':
		case '\r':
		case ' ':
			break;
		default:
			*s++ = c;
		}
	}
	*s = 0;
};
template <typename T>
invd scan(T &arg) { return arg.scan(); }
template <typename T, typename V>
invd scan(pair<T, V> &a) { scan(a.first), scan(a.second); }
btempl scan(vector<T> &v)
{
	for (T &t : v)
		scan(t);
}
btempl scan(T *a, int n)
{
	while (n--)
		scan(*a++);
}
template <typename T, typename... Args>
invd scan(T &first, Args(&...args)) { scan(first), scan(args...); }
template <typename T>
invd pr(T arg) { arg.print(); }
template <class A, class B>
invd pr(pair<A, B> a) { pr(a.first), sp, pr(a.second); }
btempl prsp(vector<T> &v)
{
	if (v.size())
		pr(v[0]);
	ff(i, 1, v.size()) sp, pr(v[i]);
}
btempl prsp(T *a, int n)
{
	while (n--)
		pr(*a++), sp;
}
btempl prln(vector<T> &v)
{
	for (const T &t : v)
		pr(t), ln;
}
btempl pr(vector<T> &v) { prsp(v); }
invd pr(size_t i) { pr((ll)i); }
btempl prln(T *a, int n)
{
	while (n--)
		pr(*a++), ln;
}
btempl prln(vector<vector<T>> &v)
{
	for (vector<T> &t : v)
		prsp(t), ln;
}
template <typename T, typename U>
invd prln(T first, U second) { pr(first), ln, pr(second); }
template <typename T, typename... Args>
invd prln(T first, Args... args) { pr(first), ln, prln(args...); }
template <typename T, typename... Args>
invd pr(T first, Args... args) { pr(first), sp, pr(args...); }
templ1 vector<T> &operator+=(vector<T> &v, T x)
{
	v.push_back(x);
	return v;
}
templ1 vector<T> &operator--(vector<T> &v)
{
	v.pop_back();
	return v;
}
templ1 vector<T> &operator--(vector<T> &v, int)
{
	v.pop_back();
	return v;
}
templ1 bool operator!(stack<T> &q) { return !q.empty(); }
templ1 stack<T> &operator+=(stack<T> &v, T x)
{
	v.push(x);
	return v;
}
templ1 T operator--(stack<T> &v)
{
	v.pop();
	return v.top();
}
templ1 T operator--(stack<T> &v, int)
{
	T t = v.top();
	v.pop();
	return t;
}
templ1 bool operator!(queue<T> &q) { return !q.empty(); }
templ1 queue<T> &operator+=(queue<T> &v, T x)
{
	v.push(x);
	return v;
}
templ1 T operator--(queue<T> &v)
{
	v.pop();
	return v.front();
}
templ1 T operator--(queue<T> &v, int)
{
	T t = v.front();
	v.pop();
	return t;
}
template <tnm T, tnm U>
invd smax(T &a, U b)
{
	if (b > a)
		a = b;
}
template <tnm T, tnm U>
invd smin(T &a, U b)
{
	if (b < a)
		a = b;
}
template <tnm T, tnm U>
inline T gcd(T a, U b) { return __gcd(a, b); }
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int getint()
{
	int x;
	scan(x);
	return x;
}
#define gi getint()

typedef vector<pii> vpii;
typedef vector<ll> vll;
ll MOD = 1E9 + 7;
const ll linf = ~(1ll << 63);
const int inf = ~(1 << 31);
const int sk = 1E9;

struct mem
{
	int loc, size, id;
	void print()
	{
		pr(loc, size);
	}
};

struct problem
{
	vector<mem> v;
	int q;
	int m;
	int p = 1;
	int alloc(int size)
	{
		int last = 0;
		ff(i, 0, v.size())
		{
			if (v[i].loc - last > size)
			{
				v.insert(v.begin() + i, {last + 1, size, p});
				return p++;
			}
			last = v[i].loc + v[i].size - 1;
		}
		return 0;
	}
	int erase(int x)
	{
		if (x < 1)
			return 0;
		ff(i, 0, v.size())
		{
			if (v[i].id == x)
			{
				v.erase(v.begin() + i);
				return 1;
			}
		}
		return 0;
	}
	void defrag()
	{
		int last = 1;
		ff(i, 0, v.size() - 1)
		{
			v[i].loc = last;
			last = v[i].loc + v[i].size;
		}
	}

	int solve()
	{
		ff(i, 0, q)
		{
			string s;
			scan(s);
			if (s == "alloc")
			{
				int x;
				scan(x);
				int k = alloc(x);
				if (k)
					pr(k);
				else
					pr("NULL");
				ln;
			}
			else if (s == "erase")
			{
				int x;
				scan(x);
				if (!erase(x))
					pr("ILLEGAL_ERASE_ARGUMENT"), ln;
			}
			else
			{
				defrag();
			}
		}
	}

	problem() : q(gi), m(gi)
	{
		v += {m + 1, 0, 0};
	}
};

int main()
{
	init(1);
	problem px = {};
	px.solve();
}