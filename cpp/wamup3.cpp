#include <iostream>
//#include <>
using namespace std;
int main(){
	char s[100],x[100];
	int n,k,j;
	cin>>n;
	cin>>k;
	cin>>s;
	for(int i=0;i<n;i++)
		{j=n-k+(i+k)%n;
		x[i]=s[j];}
	cout<<x;
}