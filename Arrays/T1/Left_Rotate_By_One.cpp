// Time Complexity : O(N)
//  Auxilary Space : O(1)
// Problem Statement : Left Rotate array by one.

#include <iostream>
#include <climits>
using namespace std;

void left_rotate_one(int arr[], int n)
{
    int start = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = start;
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
    int arr[] = {30, 5, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    left_rotate_one(arr, n);
    printArr(arr, n);

    return 0;
}