// problem link : https://leetcode.com/problems/richest-customer-wealth

#include <bits/stdc++.h>
using namespace std;
int maximumWealth(vector<vector<int>> &mat)
{
    int mx = INT_MIN;
    int sum = 0;

    for (int i = 0; i < mat.size(); i++)
    {
        sum = accumulate(mat[i].begin(), mat[i].end(), 0);
        mx = max(mx, sum);
        sum = 0;
    }
    return mx;
}

int main()
{
    vector<int> v = {10, 3, 8, 9, 4};

    map<int, int> mp;
    int i = 0;
    for_each(v.begin(), v.end(), [&mp, &i](int x) -> void
             { mp.insert(pair<int, int>(x, i++)); });

    vector<string> ans(v.size());
    int x = 0;
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {
        if (x == 0)
        {
            ans[it->second] = "Gold Medal";
        }
        else if (x == 2)
        {
            ans[it->second] = "Bronze Medal";
        }
        else if (x == 1)
        {
            ans[it->second] = "Silver Medal";
        }
        else
        {
            ans[it->second] = to_string(x + 1);
        }
        x++;
    }
    for (auto x : ans)
    {
        cout << x << endl;
    }
    return 0;
}