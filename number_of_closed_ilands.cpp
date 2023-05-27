#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int closedIsland(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if ((i * j == 0 or i == n - 1 or j == m - 1) and grid[i][j] == 0)
                {
                    dfs(i, j, n, m, grid);
                }
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {

        //         cout << grid[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                if (grid[i][j] == 0)
                {
                    ans++;
                    dfs(i, j, n, m, grid);
                }
            }
        }
        return ans;
    }

    bool isValid(int i, int j, int n, int m)
    {

        if (i >= 0 and j >= 0 and i < n and j < m)
        {
            return true;
        }
        return false;
    }

    void dfs(int i, int j, int n, int m, vector<vector<int>> &grid)
    {
        grid[i][j] = 1;
        if (isValid(i - 1, j, n, m) and grid[i - 1][j] == 0)
        {

            dfs(i - 1, j, n, m, grid);
        }
        if (isValid(i + 1, j, n, m) and grid[i + 1][j] == 0)
        {

            dfs(i + 1, j, n, m, grid);
        }
        if (isValid(i, j - 1, n, m) and grid[i][j - 1] == 0)
        {

            dfs(i, j - 1, n, m, grid);
        }
        if (isValid(i, j + 1, n, m) and grid[i][j + 1] == 0)
        {

            dfs(i, j + 1, n, m, grid);
        }
    }
};

int main()
{
    vector<vector<int>> grid = {
        {1, 1, 1, 1, 1, 1, 1, 0},
        {1, 0, 0, 0, 0, 1, 1, 0},
        {1, 0, 1, 0, 1, 1, 1, 0},
        {1, 0, 0, 0, 0, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 0}

    };
    Solution s = Solution();
    s.closedIsland(grid);

    return 0;
}