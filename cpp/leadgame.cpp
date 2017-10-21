#include <iostream>
using namespace std;
int main(){
	int t,p1,p2,s,curlead,maxlead=0,leader;
	p1=p2=0;
	cin>>t;
	while(t--){
		cin>>s;
		p1+=s;
		cin>>s;
		p2+=s;

		if(p1-p2>0){ // p1 is leading
			curlead=p1-p2;
			if (curlead>maxlead){leader=1;maxlead=curlead;}
		}
		else{
			curlead=p2-p1;
			if(curlead>maxlead){leader=2;maxlead=curlead;}
		}
	}
	cout<<leader<<' '<<maxlead;
}