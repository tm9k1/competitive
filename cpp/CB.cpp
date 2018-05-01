#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int m,n;
		cin>>m>>n;
		int Aayush=0,Harshit=0;
		Aayush=sqrt(m);
		Harshit=(-1+sqrt(1+4*n))/2;
		if(Harshit>=Aayush)	cout<<"Harshit";
		else cout << "Aayush";
		cout << "\n";
	}
}
