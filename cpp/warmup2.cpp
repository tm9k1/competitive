#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	char a[30];
	int n;
	cin>>n;
	gets(a);
	a.resize(n);
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++) cout<<a[i]<<"\n";
		
}