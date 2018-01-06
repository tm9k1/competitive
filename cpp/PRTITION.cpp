#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int x, n;
		cin >> x >> n;
		string parts;
		long long s1 = 0, s2 = 0;
		for (int i = n; i > 0; i--) {
			if (i != x)
				if (s1 < s2) {
					s1 += i;
					parts.push_back('0');
				}
				else {
					s2 += i;
					parts.push_back('1');
				}
			else parts.push_back('2');
			// cout << i << " - > " << s1 << ' ' << s2 << '\n';
		}
		if (s1 != s2) cout << "impossible";
		else for (int i = parts.length() - 1; i >= 0; i--)
				cout << parts[i];
		cout << '\n';
	}
}
