// Second Version : No source given and graph may be disconnected. Print BFS
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
        cout << u << " ";
        for (int x : adj[u])
            if (!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
    }
    cout << endl;
}

void bfsDis(vector<int> adj[], int v)
{
    vector<bool> visited(v + 1, false);
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
            bfs(adj, i, visited);
    }
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

    bfsDis(adj, vertices);

    return 0;
}