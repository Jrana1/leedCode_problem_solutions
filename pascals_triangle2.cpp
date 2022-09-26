#include <bits/stdc++.h>
using namespace std;
vector<int> getRow(int rowIndex)
{
    vector<int> helf(rowIndex + 1);
    if (rowIndex == 0)
    {
        helf[0] = 1;
        return helf;
    }
    if (rowIndex == 0)
    {
        helf[0] = 1;
        helf[1] = 1;
        return helf;
    }
    helf[0] = 1;
    helf[1] = 1;
    for (int i = 2; i <= rowIndex; i++)
    {

        vector<int> ans(i + 1);
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
            {
                ans[j] = 1;
                // tmp =1;
            }
            else
            {

                ans[j] = helf[j] + helf[j - 1];
            }
        }
        helf = ans;
    }
    for (auto x : helf)
    {

        cout << x << " ";
    }
}
int main()
{
    getRow(2);
    return 0;
}