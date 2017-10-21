#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int n,t,i,c,j;
    cin>>t;
    while(t--){
        cin>>n;
        v.resize(n);
        for(i=0;i<n;i++)
            cin>>v[i];
        for(i=0;i<n;i++){
            c=1;
            for(j=i-1;j>=0;j--)
                if(v[j]<v[i])
                    ++c;
            else break;
            cout<<c<<' ';
        }cout<<'\n';
    }
}
