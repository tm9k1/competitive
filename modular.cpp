#include <iostream>
using namespace std;
long pow(long n, int p){
	if (p==0)
		return 1;
	if (p%2==0){
		p=p/2;
		n*=n;
		return pow(n,p);
	}
	else{
		return n*pow(n*n,(p-1)/2);
	}
}

int main(){
	long n,p;
	cin>>n>>p;
	cout<<pow(n,p);
}