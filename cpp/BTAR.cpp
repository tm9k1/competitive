#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, efforts = 0;
		cin >> n;
		int tt;
		int sz1 = 0, sz2 = 0, sz3 = 0;
		for (int i = 0; i < n; i++) {
			cin >> tt;
			if (tt % 4 == 1) sz1++;
			else if (tt % 4 == 2) sz2++;
			else if (tt % 4 == 3) sz3++;
		}
		bool flag = 1; // optimistic !
		if ((sz1 + sz3) % 2)flag = 0;
		else {
			efforts += 3 * (sz1 / 4);
			efforts += 1 * (sz2 / 2);
			efforts += 3 * (sz3 / 4);
			sz1 %= 4;
			sz2 %= 2;
			sz3 %= 4;
			int sm = (sz1 > sz3) ? sz3 : sz1;
			efforts += sm;
			sz3 -= sm;
			sz1 -= sm;
			if (sz2) {
				if (sz1 > 1) {
					sz1 -= 2;
					sz2--;
					efforts += 2;
				}
				else if (sz3 > 1) {
					sz3 -= 2;
					sz2--;
					efforts += 2;
				}
				else flag = 0;
			}
			if (sz1 - sz3 != 0) flag = 0;
		}

		if (flag) cout << efforts;
		else cout << "-1";
		cout << '\n';
	}
}