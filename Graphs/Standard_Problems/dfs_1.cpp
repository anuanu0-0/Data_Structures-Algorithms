// First Version : Given an Undirected graph and a source vertex 's'
// print DFS from the given source.

#include <bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[], int s, vector<bool> &visited)
{
    visited[s] = true;
    cout << s << " ";
    for (int u : adj[s])
        if (!visited[u])
            dfs(adj, u, visited);
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
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 4, 5);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6);

    int s = 0;
    vector<bool> visited(vertices + 1, false);
    dfs(adj, s, visited);

    return 0;
}