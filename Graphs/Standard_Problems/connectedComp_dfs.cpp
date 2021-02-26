// PROBLEM STATEMENT : Count connected components in an undirected graph using DFS
// -- OR --
// Count number of islands
// Time Complexity : O(V+E)

#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], int s, vector<bool> &visited)
{
    visited[s] = true;
    // cout << s << " ";
    for (int u : adj[s])
        if (!visited[u])
            dfs(adj, u, visited);
}

int dfsDis(vector<int> adj[], int v)
{
    int count = 0;
    vector<bool> visited(v + 1, false);
    for (int i = 0; i < v; i++)
        if (!visited[i])
        {
            dfs(adj, i, visited);
            count++;
        }
    return count;
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{

    int vertices = 7;
    vector<int> adj[vertices];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 4, 3);
    addEdge(adj, 5, 6);

    // Count no. of components
    cout << dfsDis(adj, vertices) << endl;

    return 0;
}