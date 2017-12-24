#include <string>
#include <iostream>
// #include <iomanip>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string a, b, c = "";
		int a_c = 1, b_c = 0;
		cin >> a;
		for (int i = 1; i < n; i++) {
			cin >> b;
			if (a == b) {a_c++;}
			else {
				if (c.length() == 0) c += b;
				b_c++;
			}
		}
		if (a_c > b_c) cout << a;
		else if (a_c == b_c) cout << "Draw";
		else cout << c;
		if (t)cout << '\n';

	}
}