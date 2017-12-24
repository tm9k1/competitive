// O(n) solution for finding smallest subarray with sum
// greater than x
#include <iostream>
#include <vector>
using namespace std;
 
// Returns length of smallest subarray with sum greater than x.
// If there is no subarray with given sum, then returns n+1
int smallestSubWithSum(vector<int> arr, int x)
{   int n=arr.size();
    // Initialize current sum and minimum length
    int curr_sum = 0, min_len = n+1;
 
    // Initialize starting and ending indexes
    int start = 0, end = 0;
    while (end < n)
    {
        // Keep adding array elements while current sum
        // is smaller than x
        while (curr_sum <= x && end < n)
            curr_sum += arr[end++];
 
        // If current sum becomes greater than x.
        while (curr_sum >= x && start < n)
        {
            // Update minimum length if needed
            if (end - start < min_len)
                min_len = end - start;
 
            // remove starting elements
            curr_sum -= arr[start++];
        }
    }
    return min_len;
}
 
 
/* Driver program to test above function */
int main()
{
    int t;
    cin>>t;
    while(t--){
    int x,n;
    cin>>n>>x;
    vector<int> arr1;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        arr1.push_back(temp);
    }
    int res1 = smallestSubWithSum(arr1, x);
    (res1 == arr1.size()+1)? cout << "Not possible\n" :
                    cout << res1 << endl;
    }
    return 0;
}