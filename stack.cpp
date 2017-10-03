#include <iostream>
#include <stack>
using namespace std;
int main()
{	
	stack<int> x;
	int t;
	int p;
	cin>>t;
	while(t--){
		cin>>p;
		if(p==1){
			if(x.empty())
				cout<<"No Food"<<'\n';
			else{
				cout<<x.top()<<'\n';
				x.pop();
			}
		}
		else{ 
			cin>>p;
			x.push(p);}
	}
}