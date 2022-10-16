/// problem link: https://leetcode.com/problems/sort-the-matrix-diagonally/

#include <bits/stdc++.h>
using namespace std;

void original(vector<vector<int>> mat, int i, int j, int row, int col, vector<int> &tmp)
{

    if (i >= row || j >= col)
    {
        return;
    };
    tmp.push_back(mat[i][j]);
    original(mat, i + 1, j + 1, row, col, tmp);
}
void sorted(vector<vector<int>> &mat, int i, int j, int row, int col, vector<int> tmp, int idx)
{

    if (i >= row || j >= col)
    {
        return;
    }
    // cout << mat[i][j] << " ";
    mat[i][j] = tmp[idx];
    sorted(mat, i + 1, j + 1, row, col, tmp, idx + 1);
}
int main()
{

    vector<vector<int>> mat = {

        {11, 25, 66, 1, 69, 7},
        {23, 55, 17, 45, 15, 52},
        {75, 31, 36, 44, 58, 8},
        {22, 27, 33, 25, 68, 4},
        {84, 28, 14, 11, 5, 50}};

    vector<int> tmp;
    for (int i = 0; i < mat[0].size(); i++)
    {

        original(mat, 0, i, mat.size(), mat[0].size(), tmp);

        sort(tmp.begin(), tmp.end());

        sorted(mat, 0, i, mat.size(), mat[0].size(), tmp, 0);
        tmp.clear();
    }
    for (int i = 1; i < mat.size(); i++)
    {

        original(mat, i, 0, mat.size(), mat[0].size(), tmp);
        sort(tmp.begin(), tmp.end());
        sorted(mat, i, 0, mat.size(), mat[0].size(), tmp, 0);
        tmp.clear();
    }

    for (int i = 0; i < mat.size(); i++)
    {
        for (auto x : mat[i])
        {

            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}