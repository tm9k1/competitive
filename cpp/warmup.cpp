#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;
int main(){
	vector<int> n;int t;
	cin>>t;
	int x;
	int i=0;
	while(i<t){
		cin>>x;
	n.push_back(x);
	i++;}
	sort(n.begin(),n.end(),greater<int>());
	for(i=0;i<t;i++){
		cout<<n[i]<<endl;
	}
}