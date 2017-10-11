#include <iostream>
#include <vector>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p,f1=0,f2=0;
		cin>>n>>p;
		vector<int> q(n);
		for(int i=0;i<n;i++) cin>>q[i];
		for(int i=0;i<n;i++){
			if(q[i]>=p/2) f1++;  
			if(q[i]<=p/10) f2++;
		}
		if(f1==1 && f2==2) cout<<"yes\n";
		else cout<<"no\n";
	}
}