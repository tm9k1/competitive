#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
#define print(x) cout<<#x<<" = "<<x<<'\n';
using namespace std;
void rem_node(int parent[100], int p, int r);
int main(){
	int p,i; cin >> p;
	int parent[p],count=0;
	for (i = 0; i <p;i++){
        cin>>parent[i]; 
    }
    for(i=0;i<p;i++)   cout <<" Parent of "<<i<<" -> "<<parent[i]<<'\n';
    int r; cin>>r;
    rem_node(parent,p,r);
    for(i=0;i<p;i++) cout<<parent[i]<<' ';
    cout<<'\n';
    for(i = 0; i<p;i++){
        if (parent[i]!=-2 ||parent[i]!=-1){
        bool flag=0;
        for(int j=0;j<p;j++)
        if (i==parent[j]) {
            flag=1;
            cout<<"i="<<i<<" and "<<"parent["<<j<<"]"<<" are same !!!!\n";
            break;
        }
        if (flag==0) count++;
    }
    }
    cout<<count<<'\n';
}

// every removed node will become -2
void rem_node(int parent[100], int p, int r){
parent[r]=-2;
for(int i=0;i<p;i++){
    if (parent[i] == r)
    rem_node(parent,p,i);
}
}