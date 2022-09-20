// problem link: https://leetcode.com/problems/01-matrix

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
vector<vector<int>> zero_one_mat(vector<vector<int>> &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    vector<vector<int>> ans(n, vector<int>(m));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {

            if (mat[i][j] == 0)
            {
                q.push({i, j});
                ans[i][j] = 0;
            }
            else
            {
                ans[i][j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    while (!q.empty())
    {

        int i = q.front().first;
        int j = q.front().second;
        // cout << i << "," << j << endl;
        q.pop();
        if (isValid(i, j + 1, n, m) && ans[i][j + 1] == -1)
        {
            // ans[i][j + 1] = 0;
            ans[i][j + 1] = ans[i][j] + 1;
            q.push({i, j + 1});
        }
        if (isValid(i, j - 1, n, m) && ans[i][j - 1] == -1)
        {
            // ans[i][j - 1] = 0;
            ans[i][j - 1] = ans[i][j] + 1;
            q.push({i, j - 1});
        }
        if (isValid(i - 1, j, n, m) && ans[i - 1][j] == -1)
        {
            // ans[i - 1][j] = 0;
            ans[i - 1][j] = ans[i][j] + 1;
            q.push({i - 1, j});
        }
        if (isValid(i + 1, j, n, m) && ans[i + 1][j] == -1)
        {
            // ans[i + 1][j] = 0;
            ans[i + 1][j] = ans[i][j] + 1;
            q.push({i + 1, j});
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    vector<vector<int>> mat = {
        {1, 1, 1},
        {1, 1, 0},
        {1, 1, 1}};
    zero_one_mat(mat);
    return 0;
}