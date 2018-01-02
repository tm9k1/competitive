#include<iostream>
using namespace std;
// sum of digits = no%9, if val==0, then val=9.
int power(long long int x,long long int y)
{
    if (y == 0)
        return 1;
    int v = power(x, y/2)%9;
    if (y%2 == 0)
        return (v*v)%9;
        return (x%9*v*v)%9;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b;
        cin>>a>>b;
        int qw=power(a,b);
        if(qw==0) cout<<"9\n";
        else cout<<qw<<endl;
    }
    return 0;
}