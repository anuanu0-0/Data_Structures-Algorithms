//  Time Complexity : O(n)
//  Auxilary Space : O(1)
//  Problem Statement : Print n bonacci numbers

#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
#include <unordered_set>

#define vi vector<int>
#define usi unordered_set<int>
#define endl '\n'
using namespace std;

void countDistinct(vi v, int k)
{
}

int main()
{
    int size, k;
    cin >> size >> k;
    vi v(size);
    for (int i = 0; i < size; i++)
        cin >> v[i];
    countDistinct(v, k);

    return 0;
}
