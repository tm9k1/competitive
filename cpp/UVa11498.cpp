#include<iostream>
#include<cmath>
using namespace std;
struct coord {
	int x, y;
};
void calc(coord n, coord div) {
	if (div.x == n.x || div.y == n.y) {
		cout << "divisa\n";
		return;
	}
	if(n.x<div.x && n.y<div.y) cout<<"SO\n";
	if(n.x<div.x && n.y>div.y) cout<<"NO\n";
	if(n.x>div.x && n.y<div.y) cout<<"SE\n";
	if(n.x>div.x && n.y>div.y) cout<<"NE\n";
}
int main()
{	int t;
	do {
		cin >> t;
		if(t==0)break;
		coord div;
		cin >> div.x >> div.y;
		int temp = t;
		while (temp--) {
			coord n;
			cin >> n.x >> n.y;
			calc(n, div);
		}
	} while (t);
}