#include <bits/stdc++.h>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,e,m,a,output,l,sum;
		cin>>n>>k>>e>>m;
		int temp;
		int arrsum[n-1];
		for(int i=0;i<n-1;i++)
		{
			sum=0;
			for(int j=0;j<e;j++)
			{
				cin>>temp;
				sum=sum+temp;
			}
			arrsum[i]=sum;
		}
		sum=0;
	
		  for(int i=0; i<e-1; i++)
        {
            cin>>temp;
            sum=sum+temp;
        }		

			for(int i=0;i<n;i++)
		{
			for(int j=i+1;j<n;j++)
			{
				if(arrsum[i]<arrsum[j])
				{
					a=arrsum[j];
					arrsum[j]=arrsum[i];
					arrsum[i]=a;			
				}
			}
		}	
		
		output=arrsum[k-1]-sum+1;
		if(output<0)
		{
			cout<<0<<endl;
		}
		else
		 {
		
		if(output<m)
		{
			cout<<output<<endl;
		}
		if(output>m)
		{
		cout<<"Impossible"<<endl;
		}
		}
	}
	return 0;
}