// SQRT DECOMPOSITION TECHNIQUE TO STORE LARGE SUMS IN SQRT CHUNKS OF SQRT SIZE EACH !
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int data[n], blk_sz = ceil(sqrt(n));
		for (int i = 0; i < n; i++) cin >> data[i];
		int decompost[blk_sz] = {};
		// PREPARING SQRT-DECOMPOSITION ARRAY
		for (int i = 0; i < n; i++) decompost[i / blk_sz] += data[i];
		int lb, ub = 0;
		while (ub != -1) {
			cout << "\nEnter lb and ub 0-INDEXED : ";
			cin >> lb >> ub;
			int res = 0;
			while (lb % blk_sz != 0)res += data[lb++];		// bring lb to TRIVIAL BOUNDARY
			while (ub % blk_sz != blk_sz - 1)res += data[ub--];		// bring ub to TRIVIAL BOUNDARY
			// jump for sqrt(n) till lb is next to ub
			for (lb; lb != ub + 1; lb += blk_sz) res += decompost[lb / blk_sz];
			cout << '\n' << res;
		}
	}
}