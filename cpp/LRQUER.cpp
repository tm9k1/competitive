#include <iostream>
#include <iomanip>
#include <vector>
#include<algorithm> 
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int q;
		cin >> q;
		vector<long long> ar(n);
		for(int i=0;i<n;i++) cin>>ar[i];
		while(q--){
			int c;
			cin>>c;
			switch(c){
				case 1:	{int l,r;
						cin>>l>>r;
						l--;r--;
						long long mx=0;
						for(int i=l+1;i<r;i++){
							mx=max(mx,(ar[i]-ar[l])*(ar[r]-ar[i]));
						}
						cout<<mx<<'\n';
						break;
					}
				case 2: int ndx,val;
						cin>>ndx>>val;
						ar[--ndx]=val;
						break;
				default:break; 

			}

		}

	}
}