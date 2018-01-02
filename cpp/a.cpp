#include <iostream>
#include <vector>
#include <cmath>
#include <cstdio>
using namespace std;
bool is_attacked(int x,int y,int board[][10],int n){
	for (int i = 0; i < n; ++i)
	{// check in the row (horizontal)
		if(board[x][i]==1)
			return true;	
	// check in the column (vertical)
		if(board[i][y]==1)
			return true;}
	//	check both diagonals
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if (abs(x - i) == abs(y - j))
			if  (board[i][j] == 1) return true;
		}
	}

	return false;
}

bool plantqueens(int board[][10],int n,int qleft)
{	if (qleft==0) return true;
	for (int i=0;i<n;i++)
		for (int j=0;j<n;j++)
			if (!is_attacked(i,j,board,n)){
				board[i][j]=1;           // 1 (more) queen planted
				if (plantqueens(board,n,qleft-1)==true){
				return true;}
				else board[i][j]=0;
			}
	return false;
}

int main(){
	int n;
	cin>>n;
	int board[10][10]={0};
	plantqueens(board,n,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<board[i][j]<<' ';
	cout<<'\n';
	 }
	// else
		// cout<<"NOT POSSIBLE\n";
}
