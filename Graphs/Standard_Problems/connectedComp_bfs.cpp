// PROBLEM STATEMENT : Count connected components in an undirected graph using BFS
// -- OR --
// Count number of islands using BFS

// Time Complexity : O(V+E)

#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj[], int s, vector<bool> &visited)
{
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        // cout << u << " ";
        for (int x : adj[u])
            if (!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
    }
}

int bfsDis(vector<int> adj[], int v)
{
    int count = 0;
    vector<bool> visited(v + 1, false);
    for (int i = 0; i < v; i++)
    {

        if (!visited[i])
        {
            count++;
            bfs(adj, i, visited);
        }
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
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);

    addEdge(adj, 5, 4);
    addEdge(adj, 6, 4);
    addEdge(adj, 5, 6);

    // Count disconnected components
    cout << bfsDis(adj, vertices) << endl;

    return 0;
}