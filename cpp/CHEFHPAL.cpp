#include <iostream>
using namespace std;
int main() {
	int t, i, n, a;
	cin >> t;
	char str[6] = {'b','b','a','a','b','a'};
	char ss[6] = {'a', 'b', 'c'};
	while (t--) {
		int j;
		cin >> n >> a;
		if (a == 1) {
			cout << n << ' ';
			for (i = 0; i < n; i++) cout << 'a';
		}
		else if (a == 2) {
			if (n == 1) cout << "1 a";
			else if (n == 2) cout << "1 ab";
			else if (n == 3) cout << "2 abb";
			else if (n == 4) cout << "3 aaab";
			else if (n == 5) cout << "3 aaabb";
			else if (n == 6) cout << "3 aaabab";
			else if (n == 7) cout << "3 aaababb";
			else if (n == 8) cout << "3 aaababbb";   	
			else {
				cout << "4 ";
				for (i = 0; i < n; i++) cout << str[i % 6];
			}
		}
		else {
			cout << "1 ";
			for (i = 0; i < n; i++)
					cout << ss[i%3];
		}
		cout << '\n';
	}
}