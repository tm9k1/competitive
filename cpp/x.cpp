#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> one,two,three;
		int t;
		for(int i=0;i<n;i++){
		cin>>t;
		if(t%4==1) one.push_back(t);
		else if(t%4==2) two.push_back(t);
		else if(t%4==3) three.push_back(t);
		}
		bool flag=1; // optimistic !
		if(two.size())


		cout<<'\n';

	}}