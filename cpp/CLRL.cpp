// https://www.codechef.com/NOV17/problems/CLRL
#include <iostream>
using namespace std;
int main() {
	int t, i;
	cin >> t;
	while (t--) {
		long long n, rr, ub = 2147483647, lb = -2147483648, prate, nrate,flag=0;
		cin >> n >> rr;
		cin >> prate;
		for (i = 1; i < n; i++) {
			cin >> nrate;
			if (prate > rr) if (nrate>prate) flag=1;
			if (prate < rr) if (nrate<prate) flag=1;
			if (prate > rr) ub=prate;
			if (prate < rr) lb=prate;
			if (prate > rr) if (nrate<lb) flag=1;
			if (prate < rr) if (nrate>ub) flag=1;
			prate=nrate;
		}
		if(flag) cout << "NO\n";
		else cout << "YES\n";

	}
}