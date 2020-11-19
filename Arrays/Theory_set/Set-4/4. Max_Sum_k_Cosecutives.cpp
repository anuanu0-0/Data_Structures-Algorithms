//  Time Complexity : O(n)
//  Auxilary Space : O(1)
//  Problem Statement : Maximum sum of k consecutive numbers

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

int maxKthConsecutive(int arr[], int n, int k)
{
    if (n < k)
        return 0;

    int kSum = 0;
    for (int i = 0; i < k; i++)
        kSum += arr[i];

    int res = kSum;
    for (int i = k; i < n; i++)
    {
        kSum += (arr[i] - arr[i - k]);
        res = max(kSum, res);
    }

    return res;
}

int main()
{
    int arr[] = {1, 8, 30, -5, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << maxKthConsecutive(arr, n, k) << '\n';

    return 0;
}
