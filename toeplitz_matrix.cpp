// problem link: https://leetcode.com/problems/toeplitz-matrix

#include <bits/stdc++.h>
using namespace std;
bool isToeplitz(vector<vector<int>> &mat)
{

    int n = mat.size();
    int m = mat[0].size();
    for (int i = 1; i < m; i++)
    {

        for (int j = i, k = 0; j < m; j++, k++)
        {
            cout << mat[k][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {

        for (int j = i, k = 0; j < n; j++, k++)
        {
            cout << mat[j][k] << " ";
        }
        cout << endl;
    }
    return true;
}
int main()
{

    vector<vector<int>> mat = {

        {1, 2, 3, 4},
        {5, 1, 2, 3},
        {9, 6, 1, 2},
    };

    cout << isToeplitz(mat) << endl;

    return 0;
}