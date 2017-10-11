#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
string b;
int gcd(int a, int b){
	if(!a) return b;
	return gcd(b%a,a);
}
int main(){
	int t,a,mod,i,l;
	cin>>t;
	while(t--){
		mod = 0;
		cin>>a;
		
		if(!a){
			cout<<b<<'\n';
			continue;
		}
		l = strlen(b.c_str());
		for(i=0;i<l;i++){
			mod = (mod*10 + b[i] - '0')%a;
		}
		cout<<gcd(mod,a)<<'\n';
	}
	return 0;
}