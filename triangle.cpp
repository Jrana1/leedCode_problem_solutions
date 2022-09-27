#include <bits/stdc++.h>
using namespace std;

// top to bottom approach

int fun(vector<vector<int>> &tri)
{

    for (int i = 1; i < tri.size(); i++)
    {

        int st = 0;
        int end = tri[i].size();
        while (st < end)
        {
            if (st == 0)
            {

                tri[i][st] += tri[i - 1][st];
            }
            else if (st == end - 1)
            {
                tri[i][st] += tri[i - 1][tri[i - 1].size() - 1];
            }
            else
            {

                tri[i][st] += min(tri[i - 1][st - 1], tri[i - 1][st]);
            }
            st++;
        }
    }
    // find min element from last row
    int mn = INT_MAX;
    for (auto x : tri[tri.size() - 1])
    {
        mn = min(mn, x);
    }
    return mn;
}
// bottom to top approach
int fun2(vector<vector<int>> &triangle)
{

    for (int i = triangle.size() - 2; i >= 0; i--)
    {

        for (int j = 0; j < triangle[i].size(); j++)
        {

            triangle[i][j] += min(triangle[i + 1][j], triangle[i + 1][j + 1]);
        }
    }
    return triangle[0][0];
}
int main()
{

    vector<vector<int>> tri = {

        {2},
        {3, 4},
        {6, 5, 7},
        {4, 1, 8, 3}

    };
    cout << fun2(tri) << endl;

    return 0;
}