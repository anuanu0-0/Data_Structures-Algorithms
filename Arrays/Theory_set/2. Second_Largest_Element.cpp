// Time Complexity : O(N)
// Find Second Largest Element and return its index

#include <iostream>
#include <climits>
using namespace std;

int getSecondMax(int arr[], int n)
{
    int maxEle = 0, secondMax = -1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[maxEle])
        {
            secondMax = maxEle;
            maxEle = i;
        }
        else if (arr[i] != arr[maxEle])
        {
            if (secondMax == -1 || arr[i] > arr[secondMax])
            {
                secondMax = i;
            }
        }
    }
    // Returns index of second largest number
    return secondMax;
}

int main()
{
    int arr[] = {3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getSecondMax(arr, n) << '\n';

    return 0;
}