#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<vector<int> > data(n);
		for (int i = 0; i < n; i++) {
			data[i].resize(n);
			for (int j = 0; j < n; j++) cin >> data[i][j];
			sort(data[i].begin(), data[i].end());
		}
		long long sum = data[n - 1][n - 1];
		int curmax = data[n - 1][n - 1],j,flag=0;
		for (int i = n - 2; i >= 0; i--) {
			for (j = n - 1; j >= 0; j--)
				if (data[i][j] < curmax) {
					curmax = data[i][j];
					// cout<<"curmax = "<<curmax<<'\n';
					break;
				}
				if(j==-1)flag=1;
			sum += curmax;
		}
		if(flag)cout<<-1;
		else cout<<sum;
		cout<<'\n';
	}

}