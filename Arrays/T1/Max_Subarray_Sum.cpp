//  Time Complexity : O(N)
//  Auxilary Space : O()
//  Problem Statement : Return Maximum Subarray Sum
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int maxSubarraySum(int *arr, int n)
{
}

int main()
{
    int arr[] = {1, 0, 1, 1, 1, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxSubarraySum(arr, n) << '\n';

    return 0;
}