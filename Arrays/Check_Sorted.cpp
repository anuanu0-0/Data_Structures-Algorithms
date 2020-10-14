// Time Complexity : O(N)
// Find if array is sorted or not

#include <iostream>
#include <climits>
using namespace std;

bool isSorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << isSorted(arr, n) << '\n';

    return 0;
}