#include <iostream>
#include <iomanip>
using namespace std;
double calcprob(int c, int n) {
	return (double) c / n;
}
int main() {
	int t;
	cin >> t;
	cout << fixed;
    cout << setprecision(8);
	while (t--) {
		int n;
		cin >> n;
		int mx1 = -1, c1 = 0, mx2 = -1, c2 = 0, temp;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			if (temp > mx1) {
				if (mx1 > mx2) {
					c2 = c1;
					mx2 = mx1;
				}
				c1 = 1;
				mx1 = temp;
			}
			else if (mx1 == temp) c1++;
			if (temp < mx1 && temp > mx2) {
				c2 = 1;
				mx2 = temp;
			}
			else if (mx2 == temp) c2++;
		}
		cout<<calcprob((c1>1)? c1*(c1-1)/2 : c1*c2,n*(n-1)/2)<<'\n';
	}
}