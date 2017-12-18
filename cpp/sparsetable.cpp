// RANGE QUERY ------ SPARSE TABLE IMPLEMENTATION
//	foo -> decides and returns values for sparsetable (exact values themselves)
//	data[n] - > input data
//  cmath is used for ceil, log2, and floor
//	QUERY [lb,ub] within array 0-INDEXED according to foo function !

#include <iostream>
#include <cmath>
using namespace std;
int foo(int a, int b) {
	return (a > b) ? a : b;
}

int main() {
	int n;
	cin >> n;
	int data[n];
	for (int i = 0; i < n; i++) cin >> data[i];
	int row, col;
	row = n; col = ceil(log2(n) + 1);
	int sparsetable[row][col];
	for (int i = 0; i < n; i++) sparsetable[i][0] = data[i];
	for (int j = 1; j < col; j++)
		for (int i = 0; i < row; i++) {
			sparsetable[i][j] = foo(sparsetable[i][j - 1], ((i + (1 << (j - 1))) < n) ? sparsetable[i + (1 << (j - 1))][j - 1] : -1);
		}

	for (int i = 0; i < n; i++) {
		cout << '\n';
		for (int j = 0; j < col; j++) {
			cout << sparsetable[i][j] << ' ';
		}
	}
	int lb, ub = 0;
	while (ub != -1) {
		cout << "\n Enter upper bound, lower bound 0-INDEXED : ";
		cin >> lb >> ub;
		cout << foo(sparsetable[lb][(int)floor(log2(ub - lb + 1))], sparsetable[ub + 1 - (1 << (int)floor(log2(ub - lb + 1)))][(int)floor(log2(ub - lb + 1))]);
	}
}