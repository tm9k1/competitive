#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool notclear(int date[]) {
	for (int i = 1; i <= 1000; i++)if (date[i]) return true;
	return false;
}

int main() {
	int n, x;
	cin >> n;
	int date[1000 + 1] = {}, co = 0, max = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		date[x]++;
		if (date[x] > max) max = date[x];
	}
	while(notclear(date))
	{int flag=0;
		for (int j = 1; j <= 1000; j++) {
			if (date[j])
			{	flag=1;
				date[j]--;
				co++;
			}
		}
		if(flag) co--;
	}
	cout << co;


}