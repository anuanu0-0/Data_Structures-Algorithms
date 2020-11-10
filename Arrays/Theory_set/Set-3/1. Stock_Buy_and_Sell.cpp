// Time Complexity : O(N)
//  Auxilary Space : O(1)
// Problem Statement :  Buy and Sell Stocks such that it maximizes the profit

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int maxProfit(int *arr, int n)
{
    int profit = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] > 0)
        {
            profit += arr[i] - arr[i - 1];
        }
    }
    return profit;
}

int main()
{
    int arr[] = {1, 5, 3, 1, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxProfit(arr, n) << '\n';

    return 0;
}