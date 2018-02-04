#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int bob,limak;
		cin>>limak>>bob;
		int x=0;
		while(x*x<=limak) x++;
		x--;
		int y=0;
		while(y*(y+1)<=bob) y++;
		y--;
		if(x>y) cout<<"Limak";
		else cout<<"Bob";
		cout<<'\n';
	}
}