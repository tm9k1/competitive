#include <bits/stdc++.h>
using namespace std;
int correctsteps(char s[],int it)
{
	int score=0;
	int  it2 =it+1;
	while(s[it2]!='1'&&it2<strlen(s))
	{
		it2++;
		score++;
	}
	swap(s[it],s[it2-1]);
	return 1+score;
}

int main()
{
    int test;
    cin>>test;
    while(--test>=0)//complexity 1
    {
   	char s[50];
    cin>>s;
 	 int count=0;
	for(int it=0;it<strlen(s)-1;++it)
	{
		
		if(s[it]=='1' && s[it+1]=='0')
		{
			cout<<"call\n";
			int temp=correctsteps(s,it);
			count=temp+count;
			it=0;
		}
	}
	cout<<count<<"\n";	
 	}
 }