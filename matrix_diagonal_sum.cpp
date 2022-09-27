// problem link: https://leetcode.com/problems/matrix-diagonal-sum/

#include <bits/stdc++.h>
using namespace std;

// O(n) time complexity & O(1) space complexity
int diagonalSum(vector<vector<int>> &mat)
{

    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < mat.size(); i++)
    {
        sum1 += mat[i][i];
        int n = mat.size() - 1 - i;
        if (i != n)
        {
            sum2 += mat[i][n];
        }
    }
    return sum1 + sum2;
}
int main()
{

    vector<vector<int>> mat = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    diagonalSum(mat);
    return 0;
}
