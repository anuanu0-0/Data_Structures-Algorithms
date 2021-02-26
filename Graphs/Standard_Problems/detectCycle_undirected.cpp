// Problem Statement : Detect Cycle in an undirected graph
// Time Complexity : O(V+E)

#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 17;
vector<int> adj[maxn];
vector<bool> used(maxn, false);
vector<int> dis(maxn, INT_MAX), p(maxn, -1);

// Detect cycle using bfs
bool bfs(int s, int v)
{
    queue<int> q;
    q.push(s);
    used[s] = true;
    dis[s] = 0;
    p[s] = -1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (!used[v])
            {
                used[v] = true;
                q.push(v);
                p[v] = u;
            }
            else if (p[u] != v)
            {
                return true;
            }
        }
    }
    return false;
}

// Detect cycle using dfs
bool dfs(int s, int p)
{
    used[s] = true;
    for (int u : adj[s])
    {
        if (!used[u])
        {
            if (dfs(u, s))
                return true;
        }
        else if (u != p)
            return true;
    }
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
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    int v = 5;
    // addEdge(adj, 0, 1);
    // addEdge(adj, 1, 2);
    // addEdge(adj, 1, 3);
    // addEdge(adj, 2, 3);

    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    // BFS based solution : Not handling disconnect graph
    // int s = 0;
    // cout << bfs(s, v) << endl;
    // DFS based solution : Handling disconnected graph
    cout << dfsDis(v) << endl;
}