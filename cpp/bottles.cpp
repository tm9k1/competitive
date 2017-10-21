#include <iostream>
using namespace std;  // INPUT : N no of bottles and then bottle prices in order
float thebest=0;
float the_best(float* prices,int n,int yearno,int lbtl,int rbtl){
	float lsum=0,rsum=0;
	if(lbtl<rbtl)
	lsum+=lbtl*yearno+the_best(prices,n,yearno+1,lbtl+1,rbtl);
	else return lbtl*yearno;
	if(yearno==n && lsum>thebest) thebest=lsum;
	if(lbtl<rbtl)

}
























int main(){
	int n,i=0;
	float* prices;
	cin>>n;
	prices=new float[n];
	while(i!=n){
		cin>>prices[i];
		i++;
	}
	cout<<the_best(prices,n,1,0,n-1);

}