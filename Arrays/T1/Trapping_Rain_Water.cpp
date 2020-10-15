// Time Complexity : O(N)
//  Auxilary Space : O(1)
// Problem Statement :  Given lengths of walls, return how much rain water can be trapped
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int getTrappedWater(int *arr, int n)
{
    int res = 0;
    int lmax[n], rmax[n];
    lmax[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        lmax[i] = max(arr[i], lmax[i - 1]);
    }
    rmax[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        rmax[i] = max(arr[i], rmax[i + 1]);
    }

    for (int i = 1; i < n - 1; i++)
    {
        res += (min(lmax[i], rmax[i]) - arr[i]);
    }
    return res;
}

int main()
{
    int arr[] = {2, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getTrappedWater(arr, n) << '\n';

    return 0;
}