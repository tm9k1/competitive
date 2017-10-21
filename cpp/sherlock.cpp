#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int l,s1,s2,q;
	cin>>l>>s1>>s2>>q;
	while(q--){
		int qi;
		cin>>qi;
		double len=sqrt(qi);
		int vel=(s2>s1)?s2-s1:s1-s2;
		cout.precision(30);
		cout<<((l-len)*sqrt(2))/vel<<'\n';
	}
}