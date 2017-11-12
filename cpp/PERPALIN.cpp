#include <iostream>
using namespace std;
void show(int p){
	int i=0;
	if(p%2==0){
		cout<<'a';
		for (i = 1; i < p-1; ++i)
		{
			cout<<'b';
			// cout<<"hit!\n";	
		}
		cout<<'a';
	}		
	else{
		for (i = 0; i < p/2; ++i)
		{
			cout<<'a';	
		}
		cout<<'b';
		
		for (i = p/2+1; i < p; ++i)
		{
			cout<<'a';	
		}
	}		
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,p,i=0;
	cin>>n>>p;
	if(p==1 || p==2)cout<<"impossible";
	else for(i=0;i<n/p;i++) show(p);
		cout<<'\n';
	}
}