// problem link: https://leetcode.com/problems/cells-with-odd-values-in-a-matrix

#include <bits/stdc++.h>
using namespace std;
int oddCells(int m, int n, vector<vector<int>> &indices)
{
    vector<vector<int>> ans(m, vector<int>(n));
    for (int i = 0; i < indices.size(); i++)
    {

        for (int j = 0; j < n; j++)
        {
            ans[indices[i][0]][j]++;
        }
        for (int j = 0; j < m; j++)
        {
            ans[j][indices[i][1]]++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (auto x : ans[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> mat = {
        {1, 1},
        {0, 0}};
    oddCells(2, 2, mat);
    return 0;
}