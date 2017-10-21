#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main(){
string x;
int m,n;
cin>>x;
int l=strlen(x.c_str());
int floor,ceil;
floor=sqrt(l);
if(sqrt(l)-floor !=0)
	ceil=floor+1;
else
	ceil=floor;
if(ceil*floor>=l){
m=floor;
n=ceil;
}
else{
m=ceil;
n=ceil;
}
char a[m][n];
int i,j,k=0;
// a=new char*[m];
// for(i=0;i<m;i++)
// a[i]=new char[n];
for(i=0;i<m;i++)
	for(j=0;j<n;j++){
		if(k<=l){
			a[i][j]=x[k];
			++k;
		}
		// else
		// 	a[i][j]='\0';
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cout<<a[j][i];
		if(i==l%n-1)
				--m;
		if(i!=n-1)
			cout<<' ';
	}
}												
							