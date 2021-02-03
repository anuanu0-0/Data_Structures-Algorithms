
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int print2largest(int arr[], int n)
    {
        int max = 0, secMax = -1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] > arr[max])
            {
                secMax = max;
                max = i;
            }
            else if (arr[max] != arr[i])
            {
                if (secMax == -1 || arr[secMax] < arr[i])
                {
                    secMax = i;
                }
            }
        }
        if (secMax == -1)
            return -1;
        return arr[secMax];
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        int ans = ob.print2largest(arr, n);
        cout << ans;
        cout << "\n";
    }
    return 0;
}
