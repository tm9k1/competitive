#include<iostream>
using namespace std;
void printspiral(int** matrix,int m,int n){
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
					cout<<matrix[p][i]<<" ";
				dir=1;
				++p;}
		if(dir==1)
			{
				for(i=p;i<=q;++i)
					cout<<matrix[i][s]<<" ";
				dir=2;
				--s;}
		if(dir==2)
			{
				for(i=s;i>=r;--i)
					cout<<matrix[q][i]<<" ";
				dir=3;
				--q;}
		if(dir==3)
			{
				for(i=q;i>=p;--i)
					cout<<matrix[i][r]<<" ";
				dir=0;
				++r;}
	}

}
int main(){
	int m,n,i,j;
	cout<<"ROWS COLUMNS\n";            // m = ROWS
	cin>>m>>n;						   // n = COLUMNS
	int** matrix;
	matrix=new int*[m];
	for(i=0;i<m;++i)
		matrix[i]=new int[n];
	for(i=0;i<m;++i)
		for(j=0;j<n;++j)
			cin>>matrix[i][j];
	printspiral(matrix,m,n);
	}	