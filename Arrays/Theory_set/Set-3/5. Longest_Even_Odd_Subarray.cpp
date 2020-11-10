//  Time Complexity : O(N)
//  Auxilary Space : O(1)
//  Problem Statement : Find longest even odd subarray
//  Uses Kadane's Algorithm
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int maxEvenOdd(int *arr, int n)
{
    int res = 1, curMax = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] % 2 == 0 && arr[i - 1] % 2 == 1 || arr[i] % 2 == 1 && arr[i - 1] % 2 == 0)
        {
            curMax++;
            res = max(res, curMax);
        }
        else
            curMax = 1;
    }
    return res;
}

int main()
{
    int arr[] = {5, 10, 20, 6, 3, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxEvenOdd(arr, n) << '\n';

    return 0;
}
//IPL20QL5TR8JCT