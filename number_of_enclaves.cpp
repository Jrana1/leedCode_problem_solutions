#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int numEnclaves(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {
                if ((i * j == 0 or i == n - 1 or j == m - 1) and grid[i][j] == 1)
                {
                    dfs(grid, i, j, n, m);
                }
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 1)
                {
                    ans++;
                }
            }
        }
        return ans;
    }

    void dfs(vector<vector<int>> &grid, int i, int j, int n, int m)
    {

        grid[i][j] = -1;

        if (isValid(i - 1, j, n, m) and grid[i - 1][j] == 1)
        {
            dfs(grid, i - 1, j, n, m);
        }
        if (isValid(i + 1, j, n, m) and grid[i + 1][j] == 1)
        {
            dfs(grid, i + 1, j, n, m);
        }
        if (isValid(i, j - 1, n, m) and grid[i][j - 1] == 1)
        {
            dfs(grid, i, j - 1, n, m);
        }
        if (isValid(i, j + 1, n, m) and grid[i][j + 1] == 1)
        {
            dfs(grid, i, j + 1, n, m);
        }
    }
    bool isValid(int i, int j, int n, int m)
    {

        if (i >= 0 and j >= 0 and i < n and j < m)
        {
            return true;
        }
        return false;
    }
};
int main()
{

    vector<vector<int>> grid = {

        {0, 1, 1, 0},
        {0, 0, 1, 0},
        {0, 0, 1, 0},
        {0, 0, 0, 0}

    };
    Solution s = Solution();
    cout << s.numEnclaves(grid) << endl;
    return 0;
}