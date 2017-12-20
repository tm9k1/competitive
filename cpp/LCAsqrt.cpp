// depth_= 0 at root

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int LC_ancestor(int parent[], int depth[], int decompost[], int node1, int node2) {
	while (decompost[node1] != decompost[node2]) {
		if (depth[node1] > depth[node2]) node1 = decompost[node1];
		else node2 = decompost[node2];
	}
	while (node1 != node2) {
		if (depth[node1] > depth[node2]) node1 = parent[node1];
		else node2 = parent[node2];
	}
	return node1;
}
int main() {
	int n;
	cin >> n;
	int parent[n], depth[n] = {}, decompost[n] = {}, lvl_count = 0;
	for (int i = 1; i < n; i++)
	{

		cin >> parent[i];
		depth[i] = depth[parent[i]] + 1;		// populate depths
		if (lvl_count < depth[i]) lvl_count = depth[i];
		// cout<<depth[i]<<' ';
	}
	lvl_count++; // also inc root lvl in counting
	int blk_count = ceil(sqrt(lvl_count));
	int blk_sz = ceil((float)lvl_count / blk_count);
	decompost[0] = 0;




	for (int i = 1; i < n; i++) {
		if (depth[i] / blk_sz == 0) decompost[i] = parent[i]; // nodes of root section - point to your parent !
		else {
			int temp_ptr = parent[i];
			while (depth[temp_ptr] % blk_sz != blk_sz - 1) temp_ptr = parent[temp_ptr];
			decompost[i] = temp_ptr;
		}
	}
	// cout << "blk_sz = " << blk_sz;
	// cout << "\n blk_count = " << blk_count;
	// cout << "\nlvl_count = " << lvl_count << endl;
	// for (int i = 0; i < n; i++) cout << decompost[i]  << ' ';
	int t, node1, node2;
	cin >> t;
	cin >> node1;
	t--;
	while (t--) {
		cin >> node2;
		node1 = LC_ancestor(parent, depth, decompost, node1, node2);
	}
	cout<<node1;
}