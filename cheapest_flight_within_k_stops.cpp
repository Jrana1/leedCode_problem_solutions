#include <bits/stdc++.h>
using namespace std;
void add_edge(int u, int v, vector<vector<int>> &adj)
{

    adj[u].push_back(v);
}

void show(vector<vector<int>> &adj)
{

    for (int i = 0; i < adj.size(); i++)
    {
        cout << i << "->";
        for (auto x : adj[i])
        {

            cout << x << ",";
        }
        cout << endl;
    }
}

void dfs(int s, int e, vector<vector<int>> &adj, vector<bool> &vis, vector<int> &path, vector<vector<int>> &ans)
{

    vis[s] = true;
    path.push_back(s);
    if (s == e)
    {
        ans.push_back(path);
    }
    else
    {

        for (auto neighbour : adj[s])
        {

            if (vis[neighbour] == false)

                dfs(neighbour, e, adj, vis, path, ans);
        }
    }
    vis[s] = false;
    path.pop_back();
    // cout << "el" << endl;
}
int main()
{

    vector<vector<int>> graph = {

        {0, 1, 100},
        {1, 2, 100},
        {0, 2, 500}
        // {1, 3, 600},
        // {2, 3, 200}};
    };

    vector<vector<int>> adj(3);
    map<pair<int, int>, int> mp;

    for (int i = 0; i < graph.size(); i++)
    {

        add_edge(graph[i][0], graph[i][1], adj);
        mp[{graph[i][0], graph[i][1]}] = graph[i][2];
    }

    vector<bool> vis(4, false);
    vector<int> path;
    vector<vector<int>> ans;
    dfs(0, 2, adj, vis, path, ans);
    int cost = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i].size() - 2 == 1)
        {

            for (int j = 0; j < ans[i].size() - 1; j++)
            {

                auto it = mp.find({ans[i][j], ans[i][j + 1]});
                cost += it->second;
            }
        }
    }
    cout << cost << endl;

    return 0;
}