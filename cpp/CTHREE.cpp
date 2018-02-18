/*
Today, Chef was trying to solve a problem he found pretty hard: Given an integer N and a triple of integers (a, b, c), compute the number of triples of positive integers (x, y, z) such that N = x · y · z, x ≤ a, y ≤ b and z ≤ c.

Can you help Chef solve this problem?

Two triples (x1, y1, z1) and (x2, y2, z2) differ if x1 is not equal to x2 or y1 is not equal to y2 or z1 is not equal to z2.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains four space-separated integers N, a, b and c.
Output
For each test case, print a single line containing one integer — the number of valid triples (x, y, z).

Constraints
1 ≤ T ≤ 20
1 ≤ N ≤ 109
1 ≤ a, b, c ≤ 106
Example
Input:

3
100 8 23 11
497296800 1000000 1000000 1000000
1 1 2 3

Output:

10
97800
1
Explanation
Example case 1: There are 10 valid triples (x, y, z): (1, 10, 10), (1, 20, 5), (2, 5, 10), (2, 10, 5), (4, 5, 5), (5, 2, 10), (5, 4, 5), (5, 5, 4), (5, 10, 2), (5, 20, 1).
*/

// NEEDS TO BE OPTIMISED
#include<iostream>
#include <cmath>
#include<algorithm>
#include<vector>
#include <string>
using namespace std;
int printDivisors(int n, int a, int b, int c)
{	int cnt = 0;
	for (int i = 1; i <= n  && i <= a; i++)
	{
		if (n % i == 0)
		{
			for (int j = 1; j <= b && j<=n/i; j++)
			{
				if ((n / i) % j == 0 && j <= b && (n / (i * j)) <= c)
				{	
					cnt++;

				}
			}
		}
	}
	return cnt;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, a, b, c;
		cin >> n >> a >> b >> c;
		cout << printDivisors(n, a, b, c);
		cout << "\n";
	}
}