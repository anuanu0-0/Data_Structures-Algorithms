//  Time Complexity : O(n)
//  Auxilary Space : O(1)
//  Problem Statement : Given a unsorted array of NON NEGATIVE integers.
//                       Find subarray with given sum using window sliding technique

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

bool subArraySum(int arr[], int n, int target)
{
    int start = 0, sum = arr[0];
    for (int end = 1; end < n; end++)
    { // Clear the prev window
        while (sum > target && start < end)
        {
            sum -= arr[start];
            start++;
        }
        if (sum < target)
            sum += arr[end];
        else if (sum == target)
            return true;
    }
    return (sum == target);
}

int main()
{
    int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 33;
    cout << subArraySum(arr, n, target) << '\n';

    return 0;
}
