// problem link:: https://leetcode.com/problems/find-pivot-index

#include <bits/stdc++.h>
using namespace std;

// brute force solution time-->O(n^2)
int get_pivot_index(vector<int> &nums)
{
    if (nums.size() == 1)
        return 0;
    if (nums.size() == 2 && nums[0] == 0)
    {

        return 1;
    }
    nums.push_back(0);
    int left_sum = 0;
    int right_sum = 0;
    for (int center = 0; center < nums.size(); center++)
    {
        int left = center - 1;
        int right = center + 1;
        while (left >= -1 && right < nums.size())
        {
            if (center == 0)
            {
                left_sum = 0;
                right_sum = right_sum + nums[right++];
                // cout << right_sum << " " << left_sum << endl;
                // cout << " fofj " << center << endl;
            }
            else
            {

                // cout << " fofj2 " << center << endl;
                left_sum = left_sum + nums[left--];
                right_sum = right_sum + nums[right++];
            }
        }
        if (left_sum == right_sum)
        {
            return center;
        }
    }

    return -1;
}

// Optimized solution in O(N) time

int find_pivot_index1(vector<int> &nums)
{
    int right_sum = 0;
    int left_sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        right_sum += nums[i];
    }
    for (int i = 0; i < nums.size(); i++)
    {
        right_sum -= nums[i];
        if (right_sum == left_sum)
        {
            return i;
        }
        left_sum += nums[i];
    }
    return -1;
}

int main()
{

    vector<int> nums = {0, 0};
    cout << get_pivot_index(nums) << endl;
}