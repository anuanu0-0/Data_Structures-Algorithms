// Time Complexity : O(N)
//  Auxilary Space : O(1)
// Move all zeros to the end

#include <iostream>
#include <climits>
using namespace std;

void moveZtoEnd(int arr[], int n)
{
    int non_zero_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[non_zero_count]);
            non_zero_count++;
        }
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
    int arr[] = {8, 5, 0, 10, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    moveZtoEnd(arr, n);
    printArr(arr, n);

    return 0;
}