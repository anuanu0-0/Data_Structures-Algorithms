// First Version : Given an Undirected graph and a source vertex 's'
// print BFS from the given source.

#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> adj[], int v, int s)
{
    vector<bool> visited(v + 1, false);
    queue<int> q;
    visited[s] = true;
    q.push(s);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int x : adj[u])
            if (visited[x] == false)
            {
                visited[x] = true;
                q.push(x);
            }
    }
}
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int vertices = 5;
    vector<int> adj[vertices];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 4);

    int s = 0;
    bfs(adj, vertices, s);

    return 0;
}