// depth = 0 at root

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int LC_ancestor(int** sparsetable, int row, int col, int  node1, int node2, int depth[], int lvl_count) {
	int diff=abs(depth[node1]-depth[node2]),j=0;
	
	if(depth[node1]>depth[node2])	swap(node1,node2);			// node1 is near root
	// bringing nodes to same level
	for(j=0;j<lvl_count;j++)
		if((diff>>j)&1)   // jump needed as not perfect 2's power
			node2=sparsetable[node2][j];
	// checking in table till they have CA
		while(node1 != node2){
	for(j=col-1;j>=0 && sparsetable[node1][j]==sparsetable[node2][j];j--);
	if(j!=-1){
		node1=sparsetable[node1][j];
		node2=sparsetable[node2][j]; 
	}
	else {
		node1=sparsetable[node1][0];
		node2=sparsetable[node2][0];
		break;
	}}
	return node1;
}
int main() {
	int n;
	cin >> n;
	int parent[n] = {0,}, depth[n] = {0,};
	int row, col, lvl_count = 0;
	for (int i = 1; i < n; i++) {
		cin >> parent[i];
		depth[i] = depth[parent[i]] + 1;		// populate depths
		if (lvl_count < depth[i]) lvl_count = depth[i];
	}
	lvl_count++;
	// cout<<lvl_count;
	row = n; col = ceil(log2(lvl_count));
	int** sparsetable;
	sparsetable=new int *[row];
	for (int i = 0; i < row; i++){
		sparsetable[i]=new int [col]; 	
		sparsetable[i][0] = parent[i];
	}
	for (int j = 0; j < col; j++)   sparsetable[0][j] = 0;
	for (int j = 1; j < col; j++) {
		for (int i = 1; i < row; i++) {
			sparsetable[i][j] = sparsetable[sparsetable[i][j - 1]][j - 1];
		}
	}
	int t, node1, node2;
	cin >> t;
	cin >> node1;
	while (--t) {
		cin >> node2;
		node1 = LC_ancestor(sparsetable, row, col, node1, node2,depth,lvl_count);
	}
	cout << node1;
}