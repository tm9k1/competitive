#include <iostream>
#include <vector>
using namespace std;
#define LL long long    
#define fo(i,x,y) for(i=x;i<y;i++)
int i=0,j=0,k=0;             
int main(){
	int t;
	cin>>t;
	while(t--){
		LL p,q,r,ans=0;
		cin>>p>>q>>r;
		vector<LL> a(p),b(q),c(r);
		fo(i,0,p) cin>>a[i];
		fo(i,0,q) cin>>b[i];
		fo(i,0,r) cin>>c[i];
	fo(i,0,p) fo(j,0,q) fo(k,0,r) if(a[i]<=b[j] && b[j]>=c[k]) ans+=(a[i]+b[j])*(b[j]+c[k]); 
	cout<< ans % 1000000007 <<'\n';
	}
}
