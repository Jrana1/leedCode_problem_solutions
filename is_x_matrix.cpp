// problem link: https://leetcode.com/problems/check-if-matrix-is-x-matrix/

#include <bits/stdc++.h>
using namespace std;
bool checkXMatrix(vector<vector<int>> &grid)
{

    int size = grid.size();
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            int n = size - i - 1;
            if (i == j || j == n)
            {

                if (grid[i][i] == 0 || grid[i][n] == 0)
                {
                    return false;
                }
                else
                {
                    continue;
                }
            }
            if (grid[i][j] != 0)
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{

    vector<vector<int>> grid = {{5, 0, 0, 1}, {0, 4, 1, 5}, {0, 5, 2, 0}, {4, 1, 0, 2}};
    cout << checkXMatrix(grid) << endl;
    return 0;
}