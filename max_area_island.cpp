/// problem link: https://leetcode.com/problems/max-area-of-island

#include <bits/stdc++.h>
using namespace std;
bool isValid(int i, int j, int n, int m)
{
    if (i >= 0 && i < n && j >= 0 && j < m)
    {
        return true;
    }
    return false;
}
int area(vector<vector<int>> &grid, int sr, int sc)
{
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int, int>> q;
    q.push({sr, sc});
    grid[sr][sc] = -1;
    int cnt = -1;
    while (!q.empty())
    {

        int i = q.front().first;
        int j = q.front().second;
        q.pop();
        cnt++;
        if (isValid(i, j + 1, n, m) && grid[i][j + 1] == 1)
        {
            grid[i][j + 1] = -1;
            q.push({i, j + 1});
        }
        if (isValid(i, j - 1, n, m) && grid[i][j - 1] == 1)
        {
            grid[i][j - 1] = -1;
            q.push({i, j - 1});
        }
        if (isValid(i + 1, j, n, m) && grid[i + 1][j] == 1)
        {
            grid[i + 1][j] = -1;
            q.push({i + 1, j});
        }
        if (isValid(i - 1, j, n, m) && grid[i - 1][j] == 1)
        {
            grid[i - 1][j] = -1;
            q.push({i - 1, j});
        }
    }
    return cnt;
}
int maxAreaOfIsland(vector<vector<int>> &grid)
{

    int n = grid.size();
    int m = grid[0].size();
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (grid[i][j] == 1)
            {
                mx = max(mx, area(grid, i, j));
                // cout << area(grid, i, j) << endl;
            }
        }
    }
    return mx;
}

int main()
{

    vector<vector<int>> mat = {
        {0, 0, 0, 0, 0, 0, 0, 0}};
    // {0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
    // {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
    // {0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    // {0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0},
    // {0, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 0},
    // {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
    // {0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0},
    // {0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0}};
    cout
        << maxAreaOfIsland(mat) << endl;

    return 0;
}