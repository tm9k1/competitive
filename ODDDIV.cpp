#include <iostream>
using namespace std;
int f[100000]={0};
void getready(){
for (int i = 1; i <= 100000; i += 2) {	//	for every ODD divisor
    for (int d = i; d <= 100000; d += i) {	//	for every multiple of ODD divisor
        f[d] += i;					// add ODD divisor in the FUNCTION array
    }
}
}
int main(){

	getready();
	int t;
	cin>>t;
	while(t--){
	int up,low;
	cin>>low>>up;				// LOWER BOUND - UPPER BOUND
	int res=0;
	while(up>=low) res+=f[up--];  // add every f(i) to the result
	cout<<res<<'\n';
	}
}