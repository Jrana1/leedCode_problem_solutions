// problem link: https://leetcode.com/problems/all-paths-from-source-to-target

#include <bits/stdc++.h>
using namespace std;
void show(vector<vector<int>> mat)
{

    int n = mat.size();
    for (int i = 0; i < n; i++)
    {
        cout << i << "->";
        for (auto x : mat[i])
        {

            cout << x << " ";
        }
        cout << endl;
    }
}
int visit[10];
void dfs(vector<vector<int>> mat, int source, int target, vector<vector<int>> &ans, vector<int> &path)
{

    path.push_back(source);
    if (source == target)
    {
        ans.push_back(path);
    }
    else
    {

        for (auto x : mat[source])
        {
            dfs(mat, x, target, ans, path);
        }
    }
    path.pop_back();
}
int main()
{

    vector<vector<int>> graph = {

        {4, 3, 1},
        {3, 2, 4},
        {3},
        {4},
        {}};
    vector<vector<int>> ans;
    vector<int> path;
    dfs(graph, 0, 4, ans, path);
    show(ans);
    return 0;
}