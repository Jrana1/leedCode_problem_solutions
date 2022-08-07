/// problem link: https://leetcode.com/problems/pascals-triangle

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int num)
{
    vector<vector<int>> mat;

    for (int i = 1; i < num + 1; i++)
    {
        vector<int> tmp;
        for (int j = 0; j < i; j++)
        {
            if (j == 0 || j == i - 1)
            {

                tmp.push_back(1);
            }
            else
            {
                vector<int> tmp1 = mat.back();

                tmp.push_back(tmp1[j] + tmp1[j - 1]);
            }
        }
        mat.push_back(tmp);
    }
    return mat;
}

int main()
{
    vector<vector<int>> mat = generate(7);
    for (int i = 0; i < mat.size(); i++)
    {
        vector<int> tmp;
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}