#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;
long long calc(int count){
	if(count==1) return 0;
	return count/2+calc(ceil(count/2.0));
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin>>n;
		int oddcount=0,evencount=0,temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			if(temp%2) oddcount++;
			else evencount++;
		}
		long long steps=calc(evencount+oddcount/2)+oddcount/2;
		long long count=oddcount+evencount;
		count=count-steps;
		cout<<count;
		cout << "\n";
	}
}
