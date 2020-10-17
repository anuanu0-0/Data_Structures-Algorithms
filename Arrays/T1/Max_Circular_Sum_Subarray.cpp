//  Time Complexity : O(N)
//  Auxilary Space : O(1)
//  Problem Statement : Maximum Circular Sum Subarray
//  Normal Sum Subarray + Circular Sum Subarray
//    |-> EASY         +  |-> Find Min Sub Subarray and Subtract with entire Sum with overaoll array sum
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int maxNormalSubarraySum(int *arr, int n)
{
    int res = arr[0], maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}

// Normal + Circular Sum Subarray
int maxTotalSubarraySum(int *arr, int n)
{
    // Normal Sum Subarray
    int normalSum = maxNormalSubarraySum(arr, n);
    if (normalSum < 0)
        return normalSum;

    int totalSum = 0;

    // For Circular Sum Subarray
    //  Invert the elements and find min Sum Subarray
    //  Circular Sum = Total Sum - Min Sum Subarray
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    int circularSum = totalSum + maxNormalSubarraySum(arr, n);

    return max(circularSum, normalSum);
}

int main()
{
    int arr[] = {5, -2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxTotalSubarraySum(arr, n) << '\n';

    return 0;
}
//IPL20QL5TR8JCT