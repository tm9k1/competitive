#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;
bool foo(char* ar,long long k,long long n,long long target){
	long long i=n;
	while(target){
		if(i <= target){ 
			
			ar[i]='1';
			// cout<<"target = "<<target<<'\n'<<"i ="<<i<<'\n';
			target-=i;
		}
		i--;
		if(i==k) i--;
		if(i<=0 || target) return false;
	}
	return true;
}
// print from index 1 to n
int main(){
int t;
cin>>t;
while(t--){
	long long k, n;
	cin>> k >> n;
	char* record;
	record=new char[n+1];
	for(long long i=0;i<=n;i++) if(i==k) record[i]='2';
						  else record[i]='0';
	long long target=(((n*(n+1))/2)-k)/2 ;
	if(foo(record,k,n,target) && !((((n*(n+1))/2)-k)%2)) 
		for(long long i=1;i<=n;i++) cout<<record[i];
	else cout<<"impossible";
cout<<"\n";

}
}
