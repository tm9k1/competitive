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
		long long tnl;
		cin>>tnl;
		long long tnls[tnl],c,d,v,tnl_time;
		for(long long i=0;i<tnl;i++) cin>>tnls[i];
		cin>>c>>d>>v;
		tnl_time=d/v;
		long long delay=tnls[0];
		long long i=1;
		while(i<tnl){
			if(tnls[i]-tnls[i-1]>0){
				cout<<"from tunnel "<<i-1<<"to tunnel "<<i<<" delay of "<<tnls[i]-tnls[i-1]<<'\n';
				delay+=tnls[i]-tnls[i-1];
			}
			i++;

		}
		cout<<delay*(c-1);
		cout << ".000000000\n";

	}
}
