bool check(int x,int y,bool board[][8],int N){
	int i;
	for(i=0;i<N;i++){
		if(board[x][i] || board[i][y])
			return false;
		for(j=0;j<N;++j)
			if((abs(x-i)) == abs(y-j) && board[i][j])
				return false;
	}
	return true;
}