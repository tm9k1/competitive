#include<iostream>
#include<cmath>
#include<cstdio>
#include <algorithm>
using namespace std;
void filll(float dep[], int mo) {
	float x = dep[0];
	for (int i = 0; i <= mo; i++) {
		if (dep[i]) x = dep[i];
		else dep[i] = x;
	}
}
int main()
{	do {
		int mo, t;
		float down, loan;
		cin >> mo >> down >> loan;
		if (mo < 0) break;
		cin >> t;
		float dep[mo + 1] = {};
		while (t--) {
			int monthno;
			cin >> monthno;
			cin >> dep[monthno];
		}
		filll(dep, mo);
		float car_val = loan + down; float owed = loan; float monthly = (1.0f * loan) / mo; int i = 0;
		car_val -= car_val * dep[0];
		for (i = 1; car_val <= owed; i++) {
			car_val *= (1.0- dep[i]);
			owed -= monthly;
		}
		cout << i-1;
		if(i-1 == 1) cout<<" month\n" ;
		else cout<<" months\n";
	} while (1);

}