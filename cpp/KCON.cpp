#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define INT_MAX 2147483647
long long maxSubArraySum(int a[], int size)
{
	long long max_far = -24748364, max_here = 0;

	for (int i = 0; i < size; i++)
	{
		max_here = max_here + a[i];
		if (max_far < max_here)
			max_far = max_here;

		if (max_here < 0)
			max_here = 0;
	}
	return max_far;
}
int main()
{
	int t;
	cin >> t;
	while (t--) {
		int n, k, flag = 0;
		cin >> n >> k;
		int data[n];
		long long sum = 0;
		for (int i = 0; i < n; i++) cin >> data[i];
		if (k < 4) {
			int a[n * k];
			for (int i = 0; i < n * k; i++) {
				a[i] = data[i % n];
			}
			sum = maxSubArraySum(a, n * k);
		}
		else {
			int a[n * 3];
			for (int i = 0; i < n * 3; i++) {
				a[i] = data[i % n];
			}
			long long sum2 = maxSubArraySum(a, n * 2);
			long long sum3 = maxSubArraySum(a, n * 3);
			sum=sum2+(k-2)*(sum3-sum2);
		}
		cout << sum << '\n';
	}

}