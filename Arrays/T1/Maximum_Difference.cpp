//  Time Complexity : O(N)
//  Auxilary Space : O(1)
//  Problem Statement : Find max difference of arr[j]-arr[i] such that j>i

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int maxDiff(int *arr, int n)
{
    if (n == 1)
        return 0;
    int minVal = min(arr[0], arr[1]), lastDiff = arr[1] - arr[0];
    for (int i = 2; i < n; i++)
    {
        if (arr[i] - minVal > lastDiff)
        {
            lastDiff = arr[i] - minVal;
        }
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return lastDiff;
}

int main()
{
    int arr[] = {30, 10, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxDiff(arr, n) << '\n';

    return 0;
}