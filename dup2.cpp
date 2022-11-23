// problem link: https://leetcode.com/problems/contains-duplicate-ii/description/

#include <bits/stdc++.h>
using namespace std;
bool fun(vector<int> &nums, int k)
{

    unordered_map<int, int> mp;

    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        auto it = mp.find(nums[i]);
        if (it == mp.end())
        {
            mp.insert({nums[i], i});
        }
        else
        {
            if (abs(it->second - i) <= k)
            {
                return true;
            }
            else
            {
                if (abs(it->second - i) > k)
                {
                    it->second = i;
                }
            }
        }
    }
    return false;
}

int main()
{
    vector<int> num = {1, 0, 1, 1};
    cout << fun(num, 1) << endl;
    return 0;
}