// problem linK: https://leetcode.com/problems/rotting-oranges/

#include <bits/stdc++.h>
using namespace std;

// 0->empty cell
// 1->fresh orange
// 2->rotten orange

bool isValid(int i, int j, int n, int m)
{

    if (i >= 0 && i < n && j >= 0 && j < m)
    {
        return true;
    }
    return false;
}
int rotten_orange(vector<vector<int>> &grid, int sr, int sc)
{

    queue<pair<int, int>> q;
    q.push({sr, sc});
    int n = grid.size();
    int m = grid[0].size();
    int cnt = 0;
    while (!q.empty())
    {
        int size = q.size();
        for (int r = 0; r < size; r++)
        {

            // bool flag = false;

            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            if (isValid(i, j + 1, n, m) && grid[i][j + 1] == 1)
            {
                grid[i][j + 1] = 2;
                q.push({i, j + 1});
                // flag = true;
            }
            if (isValid(i, j - 1, n, m) && grid[i][j - 1] == 1)
            {
                grid[i][j - 1] = 2;
                q.push({i, j - 1});
                // flag = true;
            }
            if (isValid(i + 1, j, n, m) && grid[i + 1][j] == 1)
            {
                grid[i + 1][j] = 2;
                q.push({i + 1, j});
                // flag = true;
            }
            if (isValid(i - 1, j, n, m) && grid[i - 1][j] == 1)
            {
                grid[i - 1][j] = 2;
                q.push({i - 1, j});
                // flag = true;
            }
            cnt++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (grid[i][j] == 1)
            {
                return -1;
            }
        }
        // cout << endl;
    }
    return cnt;
}

int main()
{
    vector<vector<int>> grid = {
        {0, 2}};

    int n = grid.size();
    int m = grid[0].size();
    int sc, sr;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (grid[i][j] == 2)
            {
                sr = i;
                sc = j;
                break;
            }
        }
    }
    cout << rotten_orange(grid, sr, sc) << endl;
    return 0;
}