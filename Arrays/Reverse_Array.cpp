// Time Complexity : O(N)
// Reverse an array
#include <iostream>
#include <climits>
using namespace std;

void reverseArr(int *arr, int n)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
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
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArr(arr, n);
    printArr(arr, n);

    return 0;
}