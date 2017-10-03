#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int x=0;
void det_x(int run_prod,int no){
	if(pow(x-1,no)>run_prod && x>0) while(pow(x-1,no)>run_prod) x--;
	while(pow(x,no)<run_prod) x++;
}
int main(){
	int n;
	int a,running_prod=1,count=1;
	cin>>n;
	while(count<=n){
		cin>>a;
		running_prod*=a;
		det_x(running_prod,count);
		count++;
	}
	cout<<"OUTPUT : "<<x<<endl<<"Product of Array : "<<running_prod<<endl<<"X Power : "<<pow(x,n)<<endl<<"Count on Exit : "<<count;
}