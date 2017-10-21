#include <iostream>
using namespace std;
int* sol;
// a recursive function that gives me nc numbers everytime i run it
void recursive(int a[50],int n,int noch,int cur,int curch){	
	if(curch==noch) {sol[curch]=a[cur];
		for(int i=1;i<=noch;i++) cout<<sol[i];
			cout<<'\n';
		if(cur<n-1)	recursive(a,n,noch,cur+1,curch);}
																	//			1 2 3 4 5           5,4,0,1 (0,i<2) 5,4,1,2 (2,i<3)
	else for(int i=cur;i<n-noch+curch;i++){							//			5, 4
		sol[curch]=a[i];													//			1234 1235 1245 1345 2345
		recursive(a,n,noch,i+1,curch+1);
	}
}

int main(){
	int n,nos[50];
	int i=0;int choices;			//		input : 5 
	cin>>n;								//		   	  : 1 2 3 4 5	
	while(i<n){							//			  : 3
		cin>>nos[i];						//	   output : 123 124 125 134 135 145 234 235 245 345
		i++; 
	}
	cin>>choices;
	sol=new int[choices];
	recursive(nos,n,choices,0,1);
}