// Time Complexity : O(N)
//  Auxilary Space : O(1)
// Problem Statement : Return Maximum Consecutive ones
#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

//  Method 1:
int maxConsecutiveOnes(int *arr, int n)
{
    int curCount = 0, prevCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            curCount++;
        }
        else
        {
            prevCount = max(curCount, prevCount);
            curCount = 0;
        }
    }
    return max(prevCount, curCount);
}

//  Method 2:
int maxCOnes(int *arr, int n)
{
    int res = 0, cur = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cur = 0;
        else
        {
            cur++;
            res = max(res, cur);
        }
    }

    return res;
}

int main()
{
    int arr[] = {1, 0, 1, 1, 1, 1, 0, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxConsecutiveOnes(arr, n) << '\n';

    return 0;
}