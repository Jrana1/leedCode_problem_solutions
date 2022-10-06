// problem link: https://leetcode.com/problems/total-hamming-distance/description

#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> nums)
{

    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int zeros = 0, ones = 0;
        for (int j = 0; j < nums.size(); j++)
        {

            if ((nums[j] & (1 << i)) == 0)
            {
                zeros++;
            }
            else
            {
                ones++;
            }
        }
        ans += (zeros * ones);
    }
    return ans;
}

int main()
{
    vector<int> nums = {2, 14, 4};
    cout << fun(nums);
    return 0;
}