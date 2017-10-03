#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> dnoms(n);
	for(int i=0;i<n;i++)
		cin>>dnoms[i];
	sort(dnoms.begin(),dnoms.end());
}