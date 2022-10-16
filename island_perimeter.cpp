// https://leetcode.com/problems/island-perimeter
#include <bits/stdc++.h>
using namespace std;
bool isValid(int i, int j, int row, int col)
{

    if (i >= 0 && i < row && j >= 0 && j < col)
    {
        return true;
    }
    return false;
}
int perimeter = 0;
int islandPerimeter(vector<vector<int>> &grid)
{

    for (int sr = 0; sr < 4; sr++)
    {
        for (int sc = 0; sc < 4; sc++)
        {
            if (grid[sr][sc] != 0)
            {
                int x = 4;

                if (isValid(sr + 1, sc, 4, 4) && grid[sr + 1][sc] == 1)
                {
                    x--;
                }
                if (isValid(sr - 1, sc, 4, 4) && grid[sr - 1][sc] == 1)
                {
                    x--;
                }
                if (isValid(sr, sc + 1, 4, 4) && grid[sr][sc + 1] == 1)
                {
                    x--;
                }
                if (isValid(sr, sc - 1, 4, 4) && grid[sr][sc - 1] == 1)
                {
                    x--;
                }
                perimeter += x;
            }
        }
    }
    cout << perimeter << endl;
}
int main()
{

    vector<vector<int>> mat = {
        {0, 1, 0, 0},
        {1, 1, 1, 0},
        {0, 1, 0, 0},
        {1, 1, 0, 0}

    };

    islandPerimeter(mat);
    // cout << perimeter << endl;
    return 0;
}