#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	long long n, a, b;
	cin >> n >> a >> b;
	long long x;
	for(int i=0;i<n;i++){
	cin>>x;
	long long ans = 0;
	ans = (x*a);
	ans /= b;
	ans*=b;
	ans = x*a - ans;
	ans/=a;
	cout<<ans<<' ';
	}
}