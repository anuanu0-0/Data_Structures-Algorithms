// Time Complexity : O(N)
// Find Largest Element

#include <iostream>
#include <climits>
using namespace std;

int getMax(int arr[], int n)
{
    int maxEle = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxEle)
            maxEle = arr[i];
    }
    return maxEle;
}

int main()
{
    int arr[] = {1, 10, 8, 50, 63, 7, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getMax(arr, n) << '\n';

    return 0;
}