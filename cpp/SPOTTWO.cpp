#include <iostream>
#include <cmath>
typedef unsigned long long ull;
using namespace std;

ull matexp(ull num,ull exp,ull mod){
	if(exp==0) return 1;
	if(exp%2==0){
		int d=matexp(num,exp/2,mod);
		return (d*d) % mod;
	}
	else return ((num%mod)*matexp(num,exp-1,mod))%mod;
}

void BCD(long a,ull &b){
	for(int i=0;a!=0;i++){
	b+=(a%2)*pow(10,i);
	a/=2;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		ull x=0;
		BCD(n,x);
		cout<<matexp(2,x*2,1000000007);	
	}
}