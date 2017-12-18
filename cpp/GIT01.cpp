// #include<cstring>
#include <string>
#include <cstdio>
#include <iostream>
// #include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	// cout << fixed;
	// cout << setprecision(8);
	while (t--) {
		int n, m;
		int cost1 = 0, cost2 = 0;
		cin >> m;
		cin >> n;					// get a mat of mxn
		char cake[n + 2];
		for (int i = 0; i < m; i++) {
			cin >> cake;
			for (int j = 0; j < n; j++)
			{	if ((i + j) % 2) {if (cake[j] == 'R') cost1 += 5;}
				else if (cake[j] == 'G') cost1 += 3;
				if ((i + j) % 2 == 0) {if (cake[j] == 'R') cost2 += 5;}
				else if (cake[j] == 'G') cost2 += 3;
				// cout << cake[j] << ' ';
			}
			cout << '\n';
		}
		cout << min(cost1, cost2) << '\n';
	}
}
