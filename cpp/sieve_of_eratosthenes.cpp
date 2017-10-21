//Implementation of checking prime numbers in case query count is LITERALLY HIGH
// Sieve of Eratosthenes - [remove all multiples] 
#include <iostream>
using namespace std;
bool RA[1000001]={1,1};				// n<=1000000
void getready(){
		for(int i=2;i*i<1000001;i++) // for every possible divisor
			if(RA[i]==0)			// if the divisor is prime [otherwise all it's multiple would've been covered by it's factor already] 
				for(int j=2*i;j<=1000001;j+=i)	// for every multiple of the divisor
					RA[j] = 1 ;
}
int main()
{
	int t,n;
	cin>>t;
	getready();
	while(t--){
	cin>>n;
	if(RA[n]==0) cout<<"yes\n";
	else cout<<"no\n";
	}
}