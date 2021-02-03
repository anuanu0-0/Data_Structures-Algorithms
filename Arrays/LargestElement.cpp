#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxCoins(int a[], int b[], int T, int n)
    {
        int coins = 0;
        vector<pair<int, int>> v;

        for (int i = 0; i < n; i++)
            v.push_back(make_pair(b[i], a[i]));

        sort(v.begin(), v.end(), greater<pair<int, int>>());

        for (int i = 0; i < n && T > 0; i++)
        {
            if (v[i].second <= T)
            {
                coins += (v[i].first * v[i].second);
                T = T - v[i].second;
            }
            else
            {
                coins += (T * v[i].first);
                T = 0;
            }
        }
        return coins;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int T, N;
        cin >> T >> N;

        int A[N], B[N];

        for (int i = 0; i < N; i++)
            cin >> A[i];
        for (int i = 0; i < N; i++)
            cin >> B[i];

        Solution ob;
        cout << ob.maxCoins(A, B, T, N) << endl;
    }
    return 0;
}