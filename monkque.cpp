#include <iostream>
#include <set>
using namespace std;
int main(){
	int t;
	cin>>t;
	set<int> a;
	int p;
	while(t--){
		int x;
		cin>>x;
		switch(x){
			case 1: cin>>p;
					a.insert(p); break;
			case 2:cin>>p;
					if(a.find(p)==a.end())
						cout<<"-1\n";
					else
						a.erase(a.find(p));
					break;
			case 3:cout<<*(a.rbegin())<<'\n';break;
			default:cout<<*(a.begin())<<'\n';break;
		}
	}
}