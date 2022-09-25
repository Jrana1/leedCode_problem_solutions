// https://leetcode.com/problems/find-the-duplicate-number

#include <bits/stdc++.h>
using namespace std;
int duplicate(vector<int> &nums)
{

    vector<int> count1(32, 0);
    vector<int> count2(32, 0);
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < 32; j++)
        {

            if ((i & (1 << j)) != 0)
            {
                count1[j]++;
            }
        }
    }
    for (auto i : nums)
    {

        for (int j = 0; j < 32; j++)
        {

            if ((i & (1 << j)) != 0)
            {
                count2[j]++;
            }
        }
    }
    vector<int> ans;
    for (int i = 0; i < 32; i++)
    {

        ans.push_back(count2[i] - count1[i]);
    }
    reverse(ans.begin(), ans.end());
    int m = ans.size();
    int num = 0;
    for (auto x : ans)
    {
        // cout << x << " ";
        num += x * (1 << m - 1);
        m--;
    }
    cout << num << endl;
}
int main()
{

    vector<int> nums = {3, 1, 3, 4, 2};

    duplicate(nums);
    return 0;
}