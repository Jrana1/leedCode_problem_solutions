#include <bits/stdc++.h>
using namespace std;
// brute force solution time complexity O(n*k) and space complexity O(1)
void rotate_array(vector<int> &nums, int k)
{
    int n = nums.size();
    while (k--)
    {
        int x = nums[n - 1];
        for (int i = n - 1; i >= 1; i--)
        {

            nums[i] = nums[i - 1];
        }
        nums[0] = x;
    }

    for (auto x : nums)
    {
        cout << x << " ";
    }
}
// another solution: time complexity O(n)
void Reverse(vector<int> &nums, int st, int end)
{

    while (st < end)
    {
        swap(nums[st], nums[end]);
        st++, end--;
    }
}

void rotate_array1(vector<int> &nums, int k)
{
    Reverse(nums, 0, nums.size() - 1);
    Reverse(nums, 0, k - 1);
    Reverse(nums, k, nums.size() - 1);
}
// another solution using space. time complexity O(n) and space complexity O(1)

void rotate_array2(vector<int> &nums, int k)
{
    int n = nums.size();
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        ans[(i + k) % n] = nums.at(i);
    }
    ans.swap(nums);
}
int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    rotate_array2(nums, 3);
    for (auto x : nums)
    {
        cout << x << " ";
    }
    return 0;
}