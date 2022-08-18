// problem link: https://leetcode.com/problems/single-number/submissions/
#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i = i + 2)
    {

        if (i == nums.size() - 1)
            return nums[i];
        if (nums[i] != nums[i + 1])
        {
            return nums[i];
        }
    }
    return -1;
}

int main()
{

    vector<int> nums = {2, 2, 3, 3, 1};
    cout << singleNumber(nums) << endl;
}