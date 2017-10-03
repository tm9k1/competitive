#include <iostream>
#include <cstdio>
using namespace std;
bool is_attacked(bool board[][10],int n,int x,int y){
	for(int i=0;i<n;i++){
		if(board[i][y]==true) return true;
		if(board[x][i]==true) return true;
		for(int j=0;j<n;j++)
			if((abs(i-x)==abs(j-y)) && board[i][j]==true) return true;
	}
	return false;
}
bool sol(bool board[][10],int n,int nq){
	if(nq==0) return true;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			if(!is_attacked(board,n,i,j)){
				board[i][j]=true;
				if(sol(board,n,nq-1)) return true;
				else board[i][j]==false;
		}
	return false;
}
int main(){
	bool board[10][10]={0};int n;
	cin>>n;
	bool poss=sol(board,n,n);
	if(poss)
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++)
				cout<<board[i][j];
			cout<<'\n';
		}
	else cout<<"NOT POSSIBLE\n";
}