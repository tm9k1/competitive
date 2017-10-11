#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool comp(long long a,long long b){
	if(a>b) return true;
	return false;
}
int main(){
	int n;
	cin>>n;
	long long sum=0;
	long long x;
	vector<long long> a(n);
	fill(a.begin(),a.end(),1ll*0);
	long long max=n-1;
	for(int i=0;i<n;i++){
		cin>>x;
		sum+=x;
		if(max<x) {
			a.resize(x+1);
			fill(a.begin()+max,a.end(),1ll* 0);
			max=x;
		}
	a[x]+=x;
	}
	sort(a.begin(),a.end(),comp);
cout<<sum-a[0];
}