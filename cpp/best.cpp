#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL;
typedef pair<int, int> PII;
typedef pair<LL, LL> PLL;
typedef pair<int, LL> PIL;
typedef pair<LL, int> PLI;
typedef vector<int> VI;
typedef vector<PII> VPII;
typedef double DB;
 
#define pb push_back
#define mset(a, b) memset(a, b, sizeof a)
#define all(x) (x).begin(), (x).end()
#define bit(x) (1 << (x))
#define bitl(x) (1LL << (x))
#define sqr(x) ((x) * (x))
#define sz(x) ((int)(x.size()))
#define cnti(x) (__builtin_popcount(x))
#define cntl(x) (__builtin_popcountll(x))
#define clzi(x) (__builtin_clz(x))
#define clzl(x) (__builtin_clzll(x))
#define ctzi(x) (__builtin_ctz(x))
#define ctzl(x) (__builtin_ctzll(x))
 
#define X first
#define Y second
 
#define Error(x) cout << #x << " = " << x << endl
 
template <typename T, typename U>
inline void chkmax(T& x, U y) {
	if (x < y) x = y;
}
 
template <typename T, typename U>
inline void chkmin(T& x, U y) {
	if (y < x) x = y;
}
 
const int MAXN = 3333;
 
struct Point {
	int x, y;
	Point(int x = 0, int y = 0) : x(x), y(y) {}
} P[MAXN];
 
int id[MAXN], _id[MAXN];
double ang[MAXN][MAXN], b[MAXN];
 
pair<int, int> a[MAXN*MAXN];
 
bool cmp(PII u, PII v) {
	return ang[u.X][u.Y] < ang[v.X][v.Y];
}
 
long long cross(Point p, Point p1, Point p2) {
	return 1LL*(p1.x-p.x)*(p2.y-p.y) - 1LL*(p1.y-p.y)*(p2.x-p.x);
}
 
bool cmp1(int u, int v) {
	return b[u] < b[v];
}
 
int main() {
	
	int n; long long S; scanf("%d%lld", &n, &S);
	for (int i = 1; i <= n; i++) scanf("%d%d", &P[i].x, &P[i].y);
	int m = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j == i) continue;
			ang[i][j] = atan2(P[j].y - P[i].y, P[j].x - P[i].x);
			a[m++] = make_pair(i, j);
		}
	}
	sort(a, a + m, cmp);
	int u = a[0].first, v = a[0].second;
	for (int i = 1; i <= n; i++) id[i] = i, b[i] = cross(P[u], P[v], P[i]);
	sort(id + 1, id + n + 1, cmp1);
	for (int i = 1; i <= n; i++) _id[id[i]] = i;
	long long ans = 0;
	for (int i = 0; i < m; i++) {
		int u = a[i].first, v = a[i].second;
		{
			int lo = 0, hi = min(_id[u], _id[v]);
			while (hi - lo > 1) {
				int mid = lo + hi >> 1;
				if (abs(cross(P[u], P[v], P[id[mid]])) > S) lo = mid;
				else hi = mid;
			}
			if (hi < min(_id[u], _id[v])) chkmax(ans, abs(cross(P[u], P[v], P[id[hi]])));
		}
		{
			int lo = max(_id[u], _id[v]), hi = n + 1;
			while (hi - lo > 1) {
				int mid = lo + hi >> 1;
				if (abs(cross(P[u], P[v], P[id[mid]])) > S) hi = mid;
				else lo = mid;
			}
			if (lo > max(_id[u], _id[v])) chkmax(ans, abs(cross(P[u], P[v], P[id[lo]])));
		}
		if (i == 0) {
			if (_id[u] < _id[v]) swap(_id[u], _id[v]), id[_id[u]] = u, id[_id[v]] = v;
		} else {
			swap(_id[u], _id[v]), id[_id[u]] = u, id[_id[v]] = v;
		}
	}
	if (ans == 0) {
		puts("-1");
	} else {
		cout << ans << endl;
	}
	return 0;
}
 