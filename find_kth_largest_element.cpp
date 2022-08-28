// problem link: https://leetcode.com/problems/kth-largest-element-in-an-array/

#include <bits/stdc++.h>
using namespace std;
// sol in O(n) time and O(n) space
int find_max(vector<int> &nums)
{
    int max = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }
    return max;
}
int findKthLargest(vector<int> &nums, int k)
{

    sort(nums.begin(), nums.end());
    return nums[nums.size() - k];
}

int main()
{

    vector<int> nums = {
        3,
        2,
        3,
        1,
        2,
        4,
        5,
        5,
        6};
    cout << findKthLargest(nums, 4) << endl;
    return 0;
}