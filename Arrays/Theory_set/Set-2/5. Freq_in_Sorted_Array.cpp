// Time Complexity : O(N)
//  Auxilary Space : O(1)
// Problem Statement : Find frequencies of all the elements in a sorted array

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

// Method 1 :
void freqSorted(int *arr, int n)
{
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] != arr[i])
        {
            cout << arr[i - 1] << " " << count << '\n';
            count = 1;
        }
        else
            count++;
        // Last Element
        if (i == n - 1)
            cout << arr[n - 1] << " " << count << '\n';
    }
}

//  Method 2 :
void printFreq(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1;
    }
}

int main()
{
    int arr[] = {10, 10, 10, 20, 20, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    freqSorted(arr, n);

    return 0;
}