#include <bits/stdc++.h>
using namespace std;

bool checkStraightLine(vector<vector<int>> &coordinates)
{

    for (int i = 0; i < coordinates.size() - 1; i++)
    {

        int x = abs(coordinates[i][0] - coordinates[i + 1][0]);
        int y = abs(coordinates[i][1] - coordinates[i + 1][1]);
        cout << x << " " << y << endl;
        if (x != 1 || y != 1)
        {
            cout << " hey" << endl;
            return false;
        }
    }
    return true;
}

int main()
{
    vector<vector<int>> v = {{1, 1}, {2, 2}, {3, 4}, {4, 5}, {5, 6}, {7, 7}};

    checkStraightLine(v);
}