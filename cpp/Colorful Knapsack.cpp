#include<iostream>
#include <vector>
#include<cmath>
#include<algorithm>
using namespace std;
int msum;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		msum = -1;
		int m, n, x, flag = 0;
		cin >> n >> m >> x;
		vector<vector<int> > w;
		w.resize(x);
		int weights[n];
		for (int i = 0; i < n; i++)cin >> weights[i];
		int tcol;
		for (int i = 0; i < n; i++) {
			cin >> tcol;
			w[tcol - 1].push_back(weights[i]);
		}
		for (int i = 0; i < m; i++) sort((w[i]).begin(), (w[i]).end());
		int sum = 0;
		for (int i = 0; i < m; i++) {
			if (w[i].size() == 0) flag = 1;		// ALERT 1 = -1
			w[i][0] += sum;
		}
		if (sum > x) flag = 1;	// ALERT 2	= -1
		if (flag) cout << -1 ;
		else {
			
		}
	}

}