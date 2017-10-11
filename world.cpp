#include <iostream>
#include <algorithm>	
#include <vector>
using namespace std;
int main(){
	long long n;
	cin>>n;
	vector<long long> v(n);
	for(long long i=0;i<n;i++) cin>>v[i];
	sort(v.begin(),v.end());
	long long q;
	cin>>q;
	while(q--){
		long long r=n-1,l=0,mid=0,m,x;
		cin>>m>>x;
		while(r>=l){
			mid=(l+r)/2;
			if(v[mid]==x) break;
			else if(v[mid] > x)r=mid-1;
			else l=mid+1;
		}
		long long count=0;
		if(v[mid]<x) mid++;			// equal or greater no in array
		if(m==0){
			while(v[mid-1]==x) mid--;
			count=n-mid;
		}
		else{		
			while(v[mid+1]==x) mid++;
			count=n-mid;
			if(v[mid]==x) count--;
		}
		if(v[mid]<x && mid==n-1) count=0;
		cout<<count<<'\n';
	}
}