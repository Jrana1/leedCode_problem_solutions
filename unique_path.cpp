#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    int ans;
    vector<int> path;

public:
    int uniquePathsIII(vector<vector<int>> &grid)
    {

        int count_zero = 0;
        int sc = 0, sr = 0;
        for (int i = 0; i < grid.size(); i++)
        {

            for (int j = 0; j < grid[0].size(); j++)
            {

                if (grid[i][j] == 0)
                {
                    count_zero++;
                }
                if (grid[i][j] == 1)
                {
                    sr = i;
                    sc = j;
                }
            }
        }
        this->ans = 0;

        vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(), false));
        dfs(grid, sr, sc, count_zero + 1, vis);
        return ans;
    }

    void dfs(vector<vector<int>> &grid, int sr, int sc, int cnt, vector<vector<bool>> &vis)
    {

        if (sc < 0 || sr < 0 || sr >= grid.size() || sc >= grid[0].size() || grid[sr][sc] == -1 || vis[sr][sc] == true)
        {
            // cout << "fjla" << endl;
            return;
        }

        if (grid[sr][sc] == 2 && cnt == 0)
        {

            this->ans++;
        }

        vis[sr][sc] = true;
        cnt--;
        dfs(grid, sr + 1, sc, cnt, vis);
        dfs(grid, sr - 1, sc, cnt, vis);
        dfs(grid, sr, sc + 1, cnt, vis);
        dfs(grid, sr, sc - 1, cnt, vis);
        vis[sr][sc] = false;
        cnt++;
    }
};

int main()
{

    vector<vector<int>> grid = {

        {1, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 2, -1}};
    Solution s;
    cout << s.uniquePathsIII(grid) << endl;

    return 0;
}