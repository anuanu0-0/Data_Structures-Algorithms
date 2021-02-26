//Problem Statement: Shortest Path in an Undirected graph
//Time complexity : O(V+E)

#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 17;
vector<int> adj[maxn];
vector<bool> used(maxn, false);
vector<int> dis(maxn, INT_MAX);

void bfs(int s, int v)
{
    queue<int> q;
    q.push(s);
    used[s] = true;
    dis[s] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (!used[v])
            {
                dis[v] = dis[u] + 1;
                used[v] = true;
                q.push(v);
            }
        }
    }
    for (int i = 0; i < v; i++)
    {
        cout << dis[i] << " ";
    }
}

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int v = 6;
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 5);
    addEdge(adj, 0, 4);
    int s = 0;
    bfs(s, v);
}