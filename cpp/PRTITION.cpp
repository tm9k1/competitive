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
		reverse(parts.begin(),parts.end());
		// for (int i = 0; i <parts.length(); i++) cout << parts[i];
		// cout << '\n';
		long long diff = abs(s1 - s2);				// assume 0's sum is GREATER
		if (diff % 2)cout << "impossible";
		else {
			int i = 1;
			if (s1 < s2) {
				for (i = (parts.length()-1-(diff/2)); i >=0; i--)
					if (parts[i] == '0' && parts[i + diff/2] == '1') {
						parts[i + diff / 2]='0';
						parts[i]='1';
						s1 -= (diff / 2);
						s2 += (diff / 2);
						// cout<<"i= "<<i<<'\n';
						break;
					}
					// else cout<<i<<" - > "<<"parts[i] ="<<parts[8]<<" parts[i + diff / 2] = "<<parts[i + diff / 2]<<'\n';
			}
			else if(s1 > s2){
				for (i = parts.length()-1-(diff/2); i >=0; i--)
					if (parts[i] == '1' && parts[i + diff / 2] == '0') {
						parts[i + diff / 2]='1';
						parts[i]='0';
						s1 += diff / 2;
						s2 -= diff / 2;
						cout<<"i= "<<i<<'\n';
							break;
					}
			}
			if (i == -1) cout << "impossible";
			else  for (int i = 0; i <parts.length(); i++) cout << parts[i];
		cout << '\n';
		
		}
	}
}	
 