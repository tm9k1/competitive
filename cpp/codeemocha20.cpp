#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char v1[10],v2[10],target[10];
    int n;
    cin>>v1>>v2;
    cin>>n;
    cout<<v1<<' '<<v2<<'\n';
    for(int i=0;i<n;i++){
        cin>>target;     
        if(strcmp(target,v1)==0)
        cin>>v1;
        else if(strcmp(target,v2)==0)
        cin>>v2;   
        cout<<v1<<' '<<v2<<'\n';
    }


}
