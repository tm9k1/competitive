#include <iostream>
using namespace std;
int fact(int n);
int small_ops(int &n){
	return n * fact(n-1);
}
int fact(int n){
	if(n==1 || n==0) return 1;
	return small_ops(n);
}
int main(){
	int n;
	cin>>n;
	if(n>=0)
	cout<<fact(n);
else cout <<"neeraj == hutiya";
}