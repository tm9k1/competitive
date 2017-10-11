#include <cstring>
#include <iostream>
using namespace std;
void simplify(int* ans){
	for(int i=0;ans[i]!=-1;i++){
	int rem=ans[i]/10;
	int j=i+1;
	while(rem){
		ans[j]+=rem%10;
		rem/=10;
		j++;
	}
}
}
int main(){
	int n;
	cin>>n;
	int* ans,j;
	ans=new int[100];
	ans=(int *)memset(ans,-1,100);
	ans[0]=n;
	for(int i=n-1;i>0;i--){
		// cout<<i<<endl<<endl;
		for(j=0;ans[j]!=-1;j++){
			ans[j]*=i;
			simplify(ans);
			// cout<<ans[j]<<endl;
		}
	}
	for(j;j!=-1;j--) cout<<ans[j];
}