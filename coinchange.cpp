#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int coin(vector<int> denoms,int n,int val){
	int be
int main(){
	int n,i=0,val;
	vector<int> denoms(10);
	cin>>n;
	while(i<n){
		cin>>denoms[i];
		i++;}
	sort(denoms.begin(),denoms.end());
	cin>>val;
	cout<<coin(denoms,n,val);
}