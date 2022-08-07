// problem link: https://leetcode.com/problems/reshape-the-matrix

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> transpose(vector<vector<int>> &mat, int r, int c)
{
    for (int i = 0; i < mat.size(); i++)
    {
    }
}

vector<int> matrixReshape(vector<vector<int>> &mat, int r, int c)
{

    int m = mat.size();
    int n = mat[0].size();

    // case 1: Transpose of Matrix
    if (m == c && r == n)
    {
        //    return transpose(mat,r, c);
    }
}

int main()
{
    int a = 23;
    int b = a >> 1;
    cout << b << endl;

    return 0;
}