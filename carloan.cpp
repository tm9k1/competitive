#include <iostream>
using namespace std;
int d=0;
int recursive(float v, int m,int curmonth, float i,float p){
	if((!recursive(v*(1+i)-d,m,curmonth+1,i,p))&&curmonth>m)
		return d;
	else if(curmonth > m) {d++;recursive(p,m,1,i,p);}
	if(v==0) return false;
	if(curmonth<m) return true;
}
int main(){
	float d,v,i;
	int m;
	cin>>v;       // ACTUAL COST
	cin>>m;		  // MONTHS	
	cin>>i;		  // INTEREST
	v*=100;
	printf("%.2f",recursive(v,m,1,i,v)/100.00);}