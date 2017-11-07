#include <bits/stdc++.h>
using namespace std;
void mean_even(int dev,int n){
		long long mean=dev;
		int i;
		for(i=0;i<n/2;i++){				//  for eves -> n/2 nums for odds -> 5/2 => 2 0s 
			cout<<"0 ";
		}
		for(i;i<n;i++){				//  
			cout<<2*mean<<' ';
		}
}
int main(){
	int t;
	cout<<fixed<<setprecision(5);
	cin>>t;
	while(t--){
		int n,dev;
		cin>>n>>dev;
		if(n%2==0){
			mean_even(dev,n);
		}
		else if(n==1 )(dev!=0)? cout <<"-1 " : cout<<"0 ";
		else{
			float cal;
			cal = sqrt(1.5)*dev - dev;
			for (int i = 0; i < n/2-1; ++i)
			{
				cout<<0<<" ";
			}
			cout<<(0-cal)<<" ";
			cout<<dev<<" ";
			cout<<(2*dev+cal)<<" ";
			for (int i = 0; i < n/2-1; ++i)
			{
				cout<<2*dev<<" ";
			}


		}
		cout<<'\n';
	}
}