// THIS IS BY  UNSORTED ARRAY DOES NOT HAVE ANY SORTED LOGIC //
#include <bits/stdc++.h>

using namespace std;
 int main()
{
	ios_base::sync_with_stdio(false);
	   cin.tie(NULL);
	    unsigned long long int n;
	    cin>>n;
	    unsigned long long int ar[n];
	    unsigned long long int prod=1;
	    for (unsigned long long int i = 0; i < n; ++i)
	    {
	    	cin>>ar[i];
	    	prod*=ar[i];
	    }
	    cout<<prod<<endl;
	   bool flag=true;
	    for(unsigned long long int i=1;i<=n;i++)
	    {
	    	//
	    	if(pow(ar[i],n)>prod)
	    	{
	    		flag=false;
	    		cout<<ar[i];
	    		break;
	    	}
	    }
	   
	   
	    
	    
}
//THE WORLD FOR THIS CODE ENDS //