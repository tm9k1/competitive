#include <iostream>
#include <iomanip>
#include<vector>
#include<algorithm>
using namespace std;

bool myComp(long long a, long long b) {
	return a > b;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int q;
		cin >> q;
		vector<long long> div;
		div.push_back(1);
		for (int i = 0; i < n; i++) {
			long long x;
			cin >> x;
			if (x != 1)div.push_back(x);
		}
		n=div.size();
		while (q--) {
			long long l;
			cin >> l;
			long long ss = 1,ans=l;
			for(int i=0;i<n && ss<=1000000000;i++){				
				ss*=div[i];
			} 
			if (ss > l) cout << 0 << ' ';
		else{
			ans/=ss;
			cout<<ans<<' ';
		}
		}
		cout<<'\n';
	}
}