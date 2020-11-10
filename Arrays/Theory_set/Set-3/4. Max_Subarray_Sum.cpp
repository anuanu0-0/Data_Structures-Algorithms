//  Time Complexity : O(N)
//  Auxilary Space : O(1)
//  Problem Statement : Return Maximum Subarray Sum
// Kadane's Algorithm
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int maxSubarraySum(int *arr, int n)
{
    int res = arr[0], maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

int main()
{
    int arr[] = {-6, -1, -8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSubarraySum(arr, n) << '\n';

    return 0;
}
//IPL20QL5TR8JCT