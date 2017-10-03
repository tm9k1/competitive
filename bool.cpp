#include <iostream>
#include <cstring>
using namespace std;
int memo[1000];
int mincoins(int denoms[100],int n,int val){
	if(val<=0) return 0;
	if(memo[val]!=-1 ) return memo[val];
	int best=1000000;
	int reqcoins,curbest;
	for(int i=0;i<n;i++){
		if(denoms[i]<=val){
			int remval=val-denoms[i];
		reqcoins=mincoins(denoms,n,remval)+1;
		}
	curbest=min(best,reqcoins);
	}
return memo[val]=curbest;
}
int main(){
	int n,i=0;
	memset(memo,-1,sizeof(memo));
	int denoms[100];
	cin>>n;
	while(i<n){
		cin>>denoms[i];i++;
	}
	int val;
	cin>>val;
	int min_coins=mincoins(denoms,n,val);
	cout<<min_coins;
}
