//  Time Complexity : O(N)
//  Auxilary Space : O(1)
//  Problem Statement : Find Majority Element if it exists.
// Boyer Moore Majority Vote Algorithm
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int majorityElement(int *arr, int n)
{
    int res = arr[0], count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == res)
            count++;

        else
            count--;

        if (count == 0)
        {
            res = arr[i];
            count = 1;
        }
    }

    // Check | Confirmation of presence majority element
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[res] == arr[i])
            count++;
    }
    if (count > n / 2)
        return res;
    return -1;
}

int main()
{
    int arr[] = {3, 4, 7, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << majorityElement(arr, n) << '\n';

    return 0;
}
//IPL20QL5TR8JCT