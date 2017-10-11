#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,i;
		cin>>n>>k;
		int t;
		bool a[200001]={};
		for(i=0;i<n;i++){
			cin>>t;
			a[t]=1;
		}
		for(i=0;i<200001;i++) if(a[i]==0 && k==0) break;
			else if(a[i]==0) k--;
		cout<<i<<'\n';
	}
}