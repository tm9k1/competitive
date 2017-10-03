#include <iostream>
#include <queue>
using namespace std;
class compare{public:
	bool operator()(int a,int b){
		return a>b;
	}
};
int main(){
	int n,x;
	cin>>n;
	priority_queue<int,vector<int>,compare> a;
	while(n--){
		cin>>x;
		a.push(x);}
	cin>>n;
	while(n--){
		cin>>x;
		if(x==1){
			cin>>x;
			a.push(x);
		}
		else if(x==2){
			a.pop();
		}
		else{
			cout<<a.top()<<'\n';

		}
	}
}