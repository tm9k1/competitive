#include <iostream>
using namespace std;
int matexp(int num,int exp,int mod){
	if(exp==0) return 1;
	if(exp%2==0){
		int d=matexp(num,exp/2,mod);
		return (d*d) % mod;
	}
	else return ((num%mod)*matexp(num,exp-1,mod))%mod;
}
int main(){
	cout<<matexp(12,10,5);
}