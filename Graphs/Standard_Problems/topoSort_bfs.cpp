// Implement topological sort / Kahn's algorithm for a directed graph using BFS
// Time Complexity : O(V+E)

#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 17;
vector<int> adj[maxn];
vector<int> indegree(maxn, 0);

void topoSort(int v)
{
    queue<int> q;

    for (int i = 0; i < v; i++)
        if (indegree[i] == 0)
            q.push(i);

    while (!q.empty())
    {
        int u = q.front();
        cout << u << " ";
        q.pop();
        for (int i : adj[u])
            if ((--indegree[i]) == 0)
                q.push(i);
    }
}

void addEdge(vector<int> adj[], int u, int v, bool bidir)
{
    adj[u].push_back(v);
    indegree[v]++;
    if (bidir)
        adj[v].push_back(u);
}

int main()
{
    int v = 5;

    addEdge(adj, 0, 2, 0);
    addEdge(adj, 0, 3, 0);
    addEdge(adj, 2, 3, 0);
    addEdge(adj, 1, 3, 0);
    addEdge(adj, 1, 4, 0);

    topoSort(v);

    return 0;
}