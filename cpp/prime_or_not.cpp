#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int flag  = 0;
	for(int i=1;(i*i)<=n;i++)	// factors start mirroring after acheiving min difference
		if(n%i==0)
		{
			flag = 1;
		}

	if(flag == 0)
		cout<<"yes\n";
	else cout<<"no\n";
}