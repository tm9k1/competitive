#include <iostream>
#include <cmath>
using namespace std;
#define RA_in(a,n) for(long long i=0;i<n;i++) cin>>a[i]; 
char* isol;
long long cc;
bool sol(long long *vars,long long i,long long res,long long n){
	if(res%101==0){cc=i-1;return true;}
if(i==n) return false;
if( sol(vars,i+1,res+vars[i],n) ) isol[i]='+'; 
else if( sol(vars,i+1,res-vars[i],n) ) isol[i]='-';
else if( sol(vars,i+1,res*vars[i],n) ) isol[i]='*';
}

int main(){
long long* vars,n,i=0;
long long xx=0;
cc=0;
cin>>n;
vars=new long long[n];
RA_in(vars,n);
isol=new char[n];
sol(vars,1,vars[0],n);
for(i=cc;i<n;i++) isol[i]='*';
	i=0;
while(i<n){
	cout<<vars[i];
	if(i!=n-1)	cout<<isol[i+1];
	i++;
	}
}
