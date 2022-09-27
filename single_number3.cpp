// problem link: https://leetcode.com/problems/single-number-ii

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{

    vector<int> count(32);

    for (auto x : nums)
    {
        // int x = 99;
        for (int i = 0; i < 32; i++)
        {

            if (((x) & (1 << i)) != 0)
            {
                count[i]++;
                // cout << i << " ";
            }
        }
    }
    vector<int> ans;
    for (auto x : count)
    {
        cout << x << " ";

        ans.push_back(x % 3);
    }
    reverse(ans.begin(), ans.end());
    int num = 0;
    int n = ans.size();
    for (auto x : ans)
    {
        num += x * (1 << n - 1);
        n--;
    }
    // cout << num << endl;
}

int main()
{

    vector<int> nums = {-2, -2, 1, 1, 4, 1, 4, 4, -4, -2};
    singleNumber(nums);
    return 0;
}