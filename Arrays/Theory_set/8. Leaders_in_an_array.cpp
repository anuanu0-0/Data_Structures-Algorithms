// Time Complexity : O(N)
//  Auxilary Space : O(1)
// Problem Statement : Find leaders in an array. If there is no larger element
//                     on right of an element then it is called a leader.

#include <iostream>
#include <climits>
using namespace std;

void leader(int *arr, int n)
{
    int curMax = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > curMax)
        {
            curMax = arr[i];
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int arr[] = {10, 5, 30, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    leader(arr, n);

    return 0;
}