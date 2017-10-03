//#define LOCAL
#ifdef LOCAL
#   define TRACE
#else
#   define NDEBUG
#endif
 
#include<bits/stdc++.h>
 
using namespace std;
 
/* aliases */
using vi  = vector<int>;
using pi  = pair<int, int>;
using vs  = vector<string>;
using vpi = vector<pi>;
using ll  = long long int;
 
/* shortcut macros */
#define mp              make_pair
#define fi              first
#define se              second
#define mt              make_tuple
#define gt(t, i)        get<i>(t)
#define all(x)          (x).begin(), (x).end()
#define ini(a, v)       memset(a, v, sizeof(a))
#define re(i, s, n)     for(auto i = s, _##i = (n); i < _##i; ++i)
#define rep(i, s, n)    re(i, s, (n) + 1)
#define fo(i, n)        re(i, 0, n)
#define si(x)           (int)(x.size())
#define pu              push_back
#define is1(mask,i)     ((mask >> i) & 1)
 
/* trace macro */
#ifdef TRACE
#   define trace(v...)  {cerr << __func__ << ":" << __LINE__ << ": " ;_dt(#v, v);}
#else
#   define trace(...)
#endif
 
#ifdef TRACE
pi _gp(string s) {
    pi r(0, si(s) - 1);
    int p = 0, s1 = 0, s2 = 0, start = 1;
    fo(i, si(s)) {
        int x = (s1 | s2);
        if(s[i] == ' ' && start) {
            ++r.fi;
        } else {
            start = 0;
            if(s[i] == ',' && !p && !x) {
                r.se = i - 1;
                return r;
            }
            if(x && s[i] == '\\') ++i;
            else if(!x && s[i] == '(') ++p;
            else if(!x && s[i] == ')') --p;
            else if(!s2 && s[i] == '\'') s1 ^= 1;
            else if(!s1 && s[i] == '"') s2 ^= 1;
        }
    }
    return r;
}
 
template<typename H> void _dt(string u, H&& v) {
    pi p = _gp(u);
    cerr << u.substr(p.fi, p.se - p.fi + 1) << " = " << forward<H>(v) << " |" << endl;
}
 
template<typename H, typename ...T> void _dt(string u, H&& v, T&&... r) {
    pi p = _gp(u);
    cerr << u.substr(p.fi, p.se - p.fi + 1) << " = " << forward<H>(v) << " | ";
    _dt(u.substr(p.se + 2), forward<T>(r)...);
}
 
template<typename T> 
ostream &operator <<(ostream &o, vector<T> v) { // print a vector
    o << "{";
    fo(i, si(v) - 1) o << v[i] << ", ";
    if(si(v)) o << v.back();
    o << "}";
    return o;
}
 
template<typename T1, typename T2> 
ostream &operator <<(ostream &o, map<T1, T2> m) { // print a map
    o << "[";
    for(auto &p: m) {
        o << " (" << p.fi << " -> " << p.se << ")";
    }
    o << " ]";
    return o;
}
 
template <size_t n, typename... T>
typename enable_if<(n >= sizeof...(T))>::type
    print_tuple(ostream&, const tuple<T...>&) {} 
 
template <size_t n, typename... T>
typename enable_if<(n < sizeof...(T))>::type
    print_tuple(ostream& os, const tuple<T...>& tup) {
    if (n != 0)
        os << ", ";
    os << get<n>(tup);
    print_tuple<n+1>(os, tup);
}
 
template <typename... T>
ostream& operator<<(ostream& os, const tuple<T...>& tup) { // print a tuple
    os << "(";
    print_tuple<0>(os, tup);
    return os << ")";
}
 
template <typename T1, typename T2>
ostream& operator<<(ostream& os, const pair<T1, T2>& p) { // print a pair
    return os << "(" << p.fi << ", " << p.se << ")";
}
#endif
    
/* util functions */
 
template<typename T>
string tostr(T x) {
    ostringstream oss;
    oss << x;
    return oss.str();
}
 
template<typename T1, typename T2, typename T3>
T1 modpow(T1 a, T2 p, T3 mod) {
    T1 ret = 1;
 
    a %= mod;
    for(; p > 0; p /= 2) {
        if(p & 1) ret = 1ll * ret * a % mod;
        a = 1ll * a * a % mod;
    }
 
    return ret;
}
 
#define x1 _asdfzx1
#define y1 _ysfdzy1
 
int dx[] {-1, 0, 1, 0, 1, 1, -1, -1};
int dy[] {0, -1, 0, 1, 1, -1, 1, -1};
 
/* constants */
constexpr auto PI  = 3.14159265358979323846L;
constexpr auto oo  = numeric_limits<int>::max() / 2 - 10;
constexpr auto eps = 1e-6;
constexpr auto mod = 1000000007;
 
/* code */
constexpr int mx = 55;
int dp[mx][mx][mx][mx], n, k, tim;
int vis[mx];
int tt[mx][3], pp[mx][3];
 
class Problem {
    public:
    int contest, repeat, pl, t;
 
    bool operator<(const Problem &p) {
        return 1ll * pl * p.t < 1ll * p.pl * t;
    }
} p[3 * mx]; 
 
int solve(int i, int s, int c, int t) {
    if(s > k) return -oo;
    if(s + c > n) return -oo;
    if(t > tim) return -oo;
    if(i == n) return 0;
    int &ret = dp[i][s][c][t];
    if(ret != -1) return ret;
    ret = 0;
    ret = max(ret, solve(i + 1, s, c, t));
 
    fo(j1, 3) {
        ret = max(ret, pp[i][j1] + solve(i + 1, s, c + 1, t + tt[i][j1]));
        re(j2, j1 + 1, 3) {
            ret = max(ret, pp[i][j1] + pp[i][j2] + solve(i + 1, s + 1, c + 1, t + tt[i][j1] + tt[i][j2]));
        }
    }
    ret = max(ret, pp[i][0] + pp[i][1] + pp[i][2] + solve(i + 1, s + 2, c + 1, t + tt[i][0] + tt[i][1] + tt[i][2]));
 
    return ret;
}
 
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d %d", &n, &k, &tim);
        fo(i, n) {
            fo(j, 3) scanf("%d", tt[i] + j);
        }
        fo(i, n) {
            fo(j, 3) scanf("%d", pp[i] + j);
        }
        fo(i, n) {
            fo(j, 3) {
                int idx = 3 * i + j;
                p[idx].pl = pp[i][j];
                p[idx].t = tt[i][j];
                p[idx].contest = i;
            }
        }
        ini(dp, -1);
        int ans = solve(0, 0, 0, 0);
        printf("%d\n", ans);
    }
    
	return 0;
}
