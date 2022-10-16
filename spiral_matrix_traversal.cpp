#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int t = 0;
    int l = 0;
    int r = 3;
    int b = 3;
    while (t <= b && l <= r)
    {

        // left to right
        for (int i = l; i <= r; i++)
        {

            cout << mat[t][i] << " ";
        }
        t++;
        // top to bottom
        for (int i = t; i <= b; i++)
        {
            cout << mat[i][r] << " ";
        }
        r--;
        // right to left
        if (t <= b)
        {
            for (int i = r; i >= l; i--)
            {
                cout << mat[b][i] << " ";
            }
            b--;
        }
        // bottom to top
        if (l <= r)
        {
            for (int i = b; i >= t; i--)
            {
                cout << mat[i][l] << " ";
            }
            l++;
        }
    }
    return 0;
}