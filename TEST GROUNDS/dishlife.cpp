#include <iostream>
#include <vector>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int n,k,no,count=0,some;
		cin>>n>>k;
		vector<bool> ingfound(k);
		ingfound={};
		vector<vector<int>> island(n);
		for(int i=0;i<n;i++){
			cin>>no;
			island[i].resize(no+1);
			island[i][0]=no;
			for(int j=1;j<=island[i][0];j++){ 
				cin>>island[i][j];island[i][j]-=1;
				if(!ingfound[island[i][j]]){ ingfound[island[i][j]]=1;count++;}
			}
		}
		if(count!=k) cout<<"sad\n";
		else{
			// cout<<"pending\n";
			for(int skipped=0;skipped<n;skipped++){
				ingfound={};count=0;some=0;
				for(int i=0;i<n;i++){
					if(i!=skipped){
						for(int j=1;j<=island[i][0];j++){
							if(!ingfound[island[i][j]]){
								ingfound[island[i][j]]=1;
								count++;
							}
							cout<<island[i][j]<<' ';	
						}	
					cout<<endl;
					}
				}
				if(count==k) {cout<<"some\n"; some=1; break;	
				}	
			} if(some!=1) cout<<"all\n";
		}
	}
}