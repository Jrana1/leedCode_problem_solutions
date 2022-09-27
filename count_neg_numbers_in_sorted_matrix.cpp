// problem link: https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

#include <bits/stdc++.h>
using namespace std;
int cnt_neg(vector<vector<int>> &mat)
{

    int n = mat.size();
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {

        int st = 0;
        int end = mat[i].size() - 1;
        while (st <= end)
        {

            int mid = (st + end) / 2;
            if (mat[i][mid] < 0)
            {
            }
        }
    }
}

int main()
{

    vector<vector<int>> mat = {
        {4, 3, 2, -1},
        {3, 2, 1, -1},
        {1, 1, -1, -2},
        {-1, -1, -2, -3}};

    return 0;
}