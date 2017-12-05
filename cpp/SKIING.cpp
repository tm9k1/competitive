#include <iostream>
#include<vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int ct, m, n,**g;
class pr{public: int i,j;};
vector <pr> p;
void assimilate(int **g, int i, int j, bool **vi);
void progress(int **g, int i, int j, bool **vi) {
	if (vi[i][j]) return;
	// cout << "\nvisiting " << i << ' ' << j << "right now...";
	vi[i][j] = 1; // visited
	if (i + 1 != n && !vi[i + 1][j]) if (g[i + 1][j] <= g[i][j]) progress(g, i + 1, j, vi); else {pr a; a.i=i+1;a.j=j;p.push_back(a);} ;
	if (i - 1 != -1 && !vi[i - 1][j]) if (g[i - 1][j] <= g[i][j]) progress(g, i - 1, j, vi) ; else {pr a; a.i=i-1;a.j=j;p.push_back(a);} ;
	if (j - 1 != -1 && !vi[i][j - 1]) if (g[i][j - 1] <= g[i][j]) progress(g, i, j - 1, vi) ; else {pr a; a.i=i;a.j=j-1;p.push_back(a);} ;
	if (j + 1 != m && !vi[i][j + 1]) if (g[i][j + 1] <= g[i][j]) progress(g, i, j + 1, vi) ; else {pr a; a.i=i;a.j=j+1;p.push_back(a);} ;
	return;
}

bool mycomp(pr &a,pr &b){
	return g[a.i][a.j]<g[b.i][b.j];
}

void assimilate(int **g, bool **vi) {
	int max , mi, mj;
		max=-1;
		for (int i = 0; i < n; i++) 
			for (int j = 0; j < m; j++) {
				if (!vi[i][j]) if (g[i][j] > max) {
						max = g[i][j];
						mi = i;
						mj = j;
					}
			}
		if (!vi[mi][mj]) {ct++;progress(g, mi, mj, vi);}
		sort(p.begin(),p.end(),mycomp);
		while(!p.empty()){
			mi=(p.back()).i; 
			mj=(p.back()).j; 
			p.pop_back();
			if (!vi[mi][mj]) {ct++; progress(g, mi, mj, vi);}
		}		
	return;
}

int main() {
	int t;
	cin >> t;
	// cout << fixed;
	// cout << setprecision(8);
	while (t--) {
		ct = 0;
		cin >> n;
		cin >> m;
		int mx = -1, mi, mj;
		g = new int*[n];
		bool **vi = new bool*[n];
		for (int i = 0; i < n; i++) {
			g[i] = new int[m];
			vi[i] = new bool[m];
			for (int j = 0; j < m; j++) {
				cin >> g[i][j];
				vi[i][j] = 0;
			}
		}
		assimilate(g, vi);
		cout << ct << '\n';
	}
}