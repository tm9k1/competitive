#include <vector>
#include <iostream>
using namespace std; 
int main() {
 int n,nq;
  cin>>n>>nq;
   int lastans=0;
    vector<int>a[n];
     for(int i=0;i<nq;i++) { 
     int q,x,y; 
     cin>>q>>x>>y; 

     if(q==1) { 
     int xx=xx^(lastans); 
     xx=xx%n; 
     a[xx].insert(a[xx].begin()+i,y); } 
     else if(q==2) { 
     int xc=xc^(lastans); 
     xc=xc%n; 
     int u=y%sizeof(a[xc]); 
     lastans=a[xc][y%n]; 
     cout<<lastans; } }
     } 