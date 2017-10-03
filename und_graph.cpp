#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector <int> > A(1001);
    int nodes,edges,x,y,q,a,b,j;
    cin>>nodes>>edges;
    
    for(int i=1;i<=edges;++i)
    {
        cin>>x>>y;
        A[x].push_back(y);
        A[y].push_back(x);
    }
    cin>>q;
    for(int i=0;i<q;++i)
    {
        cin>>a>>b;
        for(j=0;j<A[a].size();++j)
        {
            if(A[a][j]==b)
            {   cout<<"YES"<<"\n";
                break;
            }
        }
        if(j==A[a].size())
        cout<<"NO"<<"\n";
    }
    return 0;
}