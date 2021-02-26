// Problem Statement : Detect Cycle in an directed graph
// Time Complexity : O(V+E)

#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 17;
vector<int> adj[maxn];
vector<bool> used(maxn, false);
vector<int> recSt(maxn, false);

// Detect cycle using dfs
bool dfs(int s, int p)
{
    used[s] = true;
    recSt[s] = true;
    for (int u : adj[s])
    {
        if (!used[u] && dfs(u, s))
            return true;

        else if (recSt[u])
            return true;
    }
    recSt[s] = false;
    return false;
}

bool dfsDis(int v)
{
    for (int i = 0; i < v; i++)
    {
        if (!used[i])
            if (dfs(i, -1))
                return true;
    }
    return false;
}
void addEdge(vector<int> adj[], int u, int v, bool bidir)
{
    adj[u].push_back(v);
    if (bidir)
        adj[v].push_back(u);
}

int main()
{
    int v = 6;

    addEdge(adj, 0, 1, 0);
    addEdge(adj, 2, 1, 0);
    addEdge(adj, 3, 4, 0);
    addEdge(adj, 2, 3, 0);
    addEdge(adj, 4, 5, 0);
    // addEdge(adj, 5, 3, 0);

    cout << dfsDis(v) << endl;

    return 0;
}