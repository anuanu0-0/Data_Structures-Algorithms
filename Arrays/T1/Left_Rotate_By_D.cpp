// Time Complexity : O(N)
//  Auxilary Space : O(1)
// Problem Statement : Left Rotate array by d units.

#include <iostream>
#include <algorithm>
using namespace std;

void left_rotate_Dunits(int *arr, int n, int d)
{
    //  If d is greater then array length
    if (d > n)
        d = d % n;
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {10, 5, 30, 15};
    int d = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    left_rotate_Dunits(arr, n, d);
    printArr(arr, n);

    return 0;
}