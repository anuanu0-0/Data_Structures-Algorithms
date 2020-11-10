//  Time Complexity : O(N)
//  Auxilary Space : O(1)
//  Problem Statement : Given a binary array, we need to find the -
//  - minimum of number of group flips to make all array elements same. -
//  - In a group flip, we can flip any set of consecutive 1s or 0s.
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

void printGroups(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
                cout << " From " << i << " to ";
            else
                cout << (i - 1) << '\n';
        }
    }

    // Case: When 1st element and last element are not equal
    //  eg: 00111101
    //  O/p: From 2 to 5  &  From 7 to (7)<--- This
    if (arr[n - 1] != arr[0])
        cout << (n - 1) << '\n';
}

int main()
{
    int arr[] = {0, 0, 1, 1, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printGroups(arr, n);

    return 0;
}
//IPL20QL5TR8JCT