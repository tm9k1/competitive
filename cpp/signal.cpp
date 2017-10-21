#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		vector<int> a(n);
		stack<int> in;
		in.push(-1);
		for(i=0;i<n;i++) cin>>a[i];
		cout<<"1 ";
		in.push(0);
		for(i=1;i<n;i++){
			while(a[i]>a[in.top()]){
				in.pop();
				if(in.top()==-1) break;
			}
			cout<<i-in.top()<<' ';
			in.push(i);
		} 	
	cout<<'\n';}
}