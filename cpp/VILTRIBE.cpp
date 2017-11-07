// https://www.codechef.com/NOV17/problems/VILTRIBE
#include <iostream>
using namespace std;
int main() {
	int t, a = 0, b = 0, i = 0;
	cin >> t;
	while (t--) {
		string v;
		a=0;b=0;
		cin >> v;
		for (i = 0; i < v.length() && v[i] == '.'; i++);
		for (i; i < v.length(); i++) {
			char last;
			if (v[i] == 'A'){a++;last = v[i];}
			if (v[i] == 'B'){ b++;last = v[i];}
			if (v[i] == '.') {
				int c = 0;
				for (i; v[i] == '.' && i < v.length(); i++) c++;
				if(i==v.length()) break;
				// cout<<"c = "<<c<<"and v["<<i<<"] = "<<v[i]<<endl;
				if (v[i] == last) (last == 'A') ? a =a+ c : b =b+c;
				i--;
				// cout<<"a = "<<a<<" b = "<<b<<'\n';
			}
		}

		cout << a << ' ' << b << '\n';
	}
}
