#include<iostream>
#include<set>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if ((a == b && c == d) || (b == c && a == d) || (a == c && b == d)) cout << "YES\n";
		else cout << "NO\n";
	}
}