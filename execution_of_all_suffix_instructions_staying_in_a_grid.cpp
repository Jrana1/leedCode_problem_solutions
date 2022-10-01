// problem link: https://leetcode.com/problems/execution-of-all-suffix-instructions-staying-in-a-grid/description
#include <bits/stdc++.h>
using namespace std;
bool isValid(int row, int col, int n)
{

    if (row >= 0 && col >= 0 && row < n && col < n)
    {
        return true;
    }
    return false;
}
vector<int> func(int n, vector<int> &poss, string s)
{
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        int move_count = 0;
        int row = poss[0];
        int col = poss[1];
        int j = i;
        while (j < size)
        {
            // cout << s[j] << " " << j << " ";

            if (s[j] == 'R')
            {
                col++;
                // move_count++;
            }
            if (s[j] == 'L')
            {
                col--;
                // move_count++;
            }
            if (s[j] == 'U')
            {
                row--;
                // move_count++;
            }
            if (s[j] == 'D')
            {
                row++;
                // move_count++;
            }
            bool flag = isValid(row, col, n);
            if (!flag)
            {
                break;
            }
            move_count++;
            j++;
        }
        // if (i == 0 || i == size - 1)
        // {

        //     cout << move_count - 1 << endl;
        // }
        // else
        // {
        //     cout << move_count << endl;
        // }
        cout << move_count << " ";
    }
}
int main()
{
    vector<int> v = {0, 0};
    func(1, v, "LRUD");

    return 0;
}