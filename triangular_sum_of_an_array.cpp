

// problem link: https://leetcode.com/problems/find-triangular-sum-of-an-array

#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &nums)
{

    for (auto x : nums)
    {
        cout << x << " ";
    }
}
int triangularSum(vector<int> &nums)
{
    if (nums.size() == 1)
        return nums[0];
    while (nums.size() != 1)
    {

        for (int i = 0; i < nums.size() - 1; i++)
        {
            nums[i] = (nums[i] + nums[i + 1]) % 10;
        }
        print(nums);
        cout << endl;
        nums.resize(nums.size() - 1);
    }
    return nums[0];
}
int main()
{

    vector<int> nums = {8, 0, 9, 9, 7, 7, 3, 9, 0, 1, 6, 5, 3, 6, 0, 8, 9, 7, 4, 3, 5, 6, 2, 1, 7, 3, 2, 3, 0, 0, 5, 2};

    triangularSum(nums);

    return 0;
}