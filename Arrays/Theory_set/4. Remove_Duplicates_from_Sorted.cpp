// Time Complexity : O(N)
//  Auxilary Space : O(1)
// Remove Duplicates from a Sorted Array and return the size of new array
#include <iostream>
#include <climits>
using namespace std;

int removeDups(int *arr, int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    // Return the new size of the array
    return i + 1;
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
    int arr[] = {10, 20, 20, 30, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int new_size = removeDups(arr, n);
    printArr(arr, new_size);

    return 0;
}