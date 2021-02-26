// Cycle Detection in Directed graoh using topological sort / kahn's algorithm
// Time Complexity : O(V+E)

// Implement topological sort / Kahn's algorithm for a directed graph using BFS
// Time Complexity : O(V+E)

#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 17;
vector<int> adj[maxn];
vector<int> indegree(maxn, 0);

bool hasCycle(int v)
{
    queue<int> q;
    int count = 0;
    for (int i = 0; i < v; i++)
        if (indegree[i] == 0)
            q.push(i);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i : adj[u])
            if ((--indegree[i]) == 0)
                q.push(i);
        count++;
    }
    return (count != v);
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
    // OP1
    // int v = 5;
    // addEdge(adj, 0, 1, 0);
    // addEdge(adj, 4, 1, 0);
    // addEdge(adj, 2, 3, 0);
    // addEdge(adj, 1, 2, 0);
    // addEdge(adj, 3, 1, 0);

    // OP2
    int v = 5;
    addEdge(adj, 0, 1, 0);
    addEdge(adj, 4, 1, 0);
    addEdge(adj, 2, 3, 0);
    addEdge(adj, 1, 2, 0);
    cout << hasCycle(v) << endl;

    return 0;
}