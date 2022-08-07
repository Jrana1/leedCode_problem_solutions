// problem link: https://leetcode.com/problems/search-a-2d-matrix
#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &mat, int target)
{
    for (int i = 0; i < mat.size(); i++)
    {
        if (binary_search(mat[i].begin(), mat[i].end(), target))
        {
            return true;
        }
    }
    return false;
}
int main()
{

    vector<vector<int>> mat = {

        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    cout << searchMatrix(mat, 11) << endl;

    return 0;
}