#include <iostream>
// #include <cstring>
#include <cmath>
using namespace std;

bool check(bool board[][99], int x, int y, int N){
	//row check col check
	for(int i = 0; i < N; ++i){
		if (board[x][i] == true) return false;
		if (board[i][y] == true) return false;
	}

	//chk diag
	for(int i = 0; i < N; ++i){
		for(int j = 0; j < N; ++j){
			if ((abs(x - i) == abs(y - j)) && board[i][j] == true) return false;
		}
	}

	return true;

}

bool sol(bool board[][99], int nQueens, int dim)
{
	if (nQueens == 0) return true;
	for(int r = 0; r < dim; ++r)
		for(int c = 0; c < dim; ++c)
			if (check(board, r, c, dim) == true)
			{
				board[r][c] = true;
				if(sol(board, nQueens - 1, dim)) return true;
				else board[r][c] = 0;
			}
	return false;
}

void print(bool board[][99], int nQueens){
	for(int r = 0; r < nQueens; ++r){
		for(int c = 0; c < nQueens; ++c){
			cout << board[r][c] << " ";
		}
		cout << endl;
	}
}

int main(){
	bool board[99][99]={0};
	// memset(board, 0, sizeof (board));
	int n; cin >> n;
	bool isPossible = sol(board, n, n);

	// if (sol(board, n) == true){
	if(isPossible){
		cout << "YES\n";
		print(board, n);
	}
	else {
		cout << "NO\n";
	}
	return 0;
}