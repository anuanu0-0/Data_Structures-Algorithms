//  Time Complexity : O(n)
//  Auxilary Space : O(n)
//  Problem Statement : Print n bonacci numbers

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

#define vi vector<int>
#define endl '\n'
using namespace std;

void printN_Bonacci(int n, int m)
{
    if (n > m)
        return;

    vector<int> v(m, 0);

    v[n - 1] = 1;
    v[n] = 1;

    for (int i = n + 1; i < m; i++)
    {
        v[i] = 2 * v[i - 1] - v[i - n - 1];
    }

    // Print n-bonacci
    for (int i = 0; i < m; i++)
        cout << v[i] << " ";
}

int main()
{
    int n, m;
    cin >> n >> m;
    printN_Bonacci(n, m);

    return 0;
}
