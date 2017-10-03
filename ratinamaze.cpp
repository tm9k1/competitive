#include <iostream>
using namespace std;
void printpath(bool** sol,int m,int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++)
			if(sol[i][j])
				cout<<'O';
			else
				cout<<' ';
		cout<<'\n';
	}
}
bool wchecker(char** maze,int x,int y,int m,int n){
	if(maze[x-1][y]=='.'&& x>0)
		return true;
	return false;
}
bool achecker(char** maze,int x,int y,int m,int n){
	if(maze[x][y-1]=='.' && y>0)
		return true;
	return false;
}
bool schecker(char** maze,int x,int y,int m, int n){
	if(maze[x+1][y]=='.' && x<m-1)
		return true;
	return false;
}
bool dchecker(char** maze,int x,int y,int m,int n){
	if(maze[x][y+1]=='.'&& y<n-1)
		return true;
	return false;
}
void path(char** maze,bool** sol,int m,int n){
	int i,j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(maze[i][j]='.')
				sol[i][j]=true;
		}
	}

}
void plot(char** puzzle,char** solution,int m,int n){
	int r=0,c=0;
	while(r!=m-1 && c!=n-1){
		if(dchecker(puzzle,r,c,m,n)){
			solution[r][c]='.';
			c=c+1;
		}
		else if(schecker(puzzle,r,c,m,n)){
		 		solution[r][c]='.';
		 		r=r+1;
			 }
			 else if(achecker(puzzle,r,c,m,n)){
			  			solution[r][c]='.';
			  			c=c-1;
				  }
				  else if(wchecker(puzzle,r,c,m,n)){
				   			solution[r][c]='.';
				   			r=r-1;
				   		}
		
	}
}
int main(){
	int m,n,i,j;
	cin>>m>>n;
	char** array;
	char** finar;
	bool** sol;
	for(i=0;i<m;i++){
		array[i]=new char[n];
		finar[i]=new char[n];
		sol[i]=new bool[n];}
	for(i=0;i<m;i++)
			cin>>array[i];
	plot(array,finar,m,n);
	path(finar,sol,m,n);
	printpath(sol,m,n);
}