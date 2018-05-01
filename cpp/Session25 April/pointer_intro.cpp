#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
#define print(x) cout<<#x<<" = "<<x<<'\n';
using namespace std;
int xx;
int main() {
	int x;
	cout<<"Enter x = ";
	cin>>x;
	print(x)
	int *ptr;
//  ptr = x; 	 // WRONG !!!!  COMPILER ERROR ( int to int* - invalid conversion)
//  *ptr = x;    // WRONG !!!! SEGMENTATION FAULT
	ptr = &x;	 // ptr POINTS TO -> ADDRESS OF x
// now, *ptr is an alias for x
	print(*ptr)	 // DISPLAY -> CONTENTS OF ptr
	x = 12;
	cout<<"Now changed x to 12 !!!\n";
	print(*ptr)
	print(x)
}
