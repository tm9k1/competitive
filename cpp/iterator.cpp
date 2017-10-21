#include<iostream>
using namespace std;
void beautify(int** matrix,int m,int n,int x){
	int i,j,dir,p,q,r,s;
	dir=0;
	p=0;                                  // p = First Row
	q=m-1;								  // q = Last Row
	r=0;								  // r = First Col	
	s=n-1;								  // s = Last Col	
	while(p<=q || r<=s)
	{
		if(dir==0)
			{
				for(i=r;i<=s;++i)
					matrix[p][i]=x;
				dir=1;
				++p;}
		if(dir==1)
			{
				for(i=p;i<=q;++i)
					matrix[i][s]=x;
				dir=2;
				--s;}
		if(dir==2)
			{
				for(i=s;i>=r;--i)
					matrix[q][i]=x;
				dir=3;
				--q;}
		if(dir==3)
			{
				for(i=q;i>=p;--i)
					matrix[i][r]=x;
				dir=0;
				++r;
				}
		--x;
	}

}
int main(){
	int m,n,i,j;
	int** matrix;
	int x;
	cout<<"Enter N : ";
	cin>>x;
	m=n=x*2-1;
	matrix=new int*[m];
	for(i=0;i<m;++i)
		matrix[i]=new int[n];
	beautify(matrix,m,n,x);
	for(i=0;i<m;++i)
		{for(j=0;j<n;++j)
			cout<<matrix[i][j]<<" ";
		 cout<<endl;}
	}	