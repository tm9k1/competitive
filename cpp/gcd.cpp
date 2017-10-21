#include <iostream>
using namespace std;
int gcd(int a,int b){
	while(b!=0){
		int rem=a%b;
		a=b;
		b=rem;
	}
		return a;
}
int main(){
	int a,b;
	cin>>a>>b;
if(a>=0 && b>=0) cout<<gcd(a,b)<<'\n';
else cout<<"invalid input\n";
}