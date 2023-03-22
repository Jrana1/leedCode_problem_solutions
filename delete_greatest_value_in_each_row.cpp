#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int deleteGreatestValue(vector<vector<int>> &grid)
    {

        int n = grid.size();
        int m = grid[0].size();
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            int curr = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                sort(grid[i].begin(), grid[i].end());
                int r = grid[i].size() - 1;
                curr = max(grid[i][r], curr);
                grid[i].resize(r);
            }
            sum += curr;
        }
        return sum;
    }
    int deleteGreatestValue1(vector<vector<int>> &grid)
    {

        int n = grid.size();
        int m = grid[0].size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sort(grid[i].begin(), grid[i].end());
        }
        for (int i = 0; i < m; i++)
        {
            int curr = INT_MIN;
            for (int j = 0; j < n; j++)
            {
                curr = max(grid[j][i], curr);
            }
            sum += curr;
        }
        return sum;
    }
};
int main()
{

    vector<vector<int>> mt = {
        {3, 1, 4},
        {2, 2, 1},
    };

    Solution s = Solution();
    cout << s.deleteGreatestValue1(mt) << endl;

    return 0;
}