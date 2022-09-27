// problem link: https://leetcode.com/problems/add-to-array-form-of-integer/
#include <bits/stdc++.h>
using namespace std;
vector<int> addToArrayForm(vector<int> &nums, int k)
{

    int i = nums.size() - 1;
    int crr = 0;
    vector<int> ans;
    while (k > 0 && i >= 0)
    {

        int tmp = k % 10 + nums[i] + crr;
        if (tmp < 10)
        {
            ans.push_back(tmp);
            crr = 0;
        }
        else
        {
            ans.push_back(tmp - 10);
            crr = 1;
        }
        k /= 10;
        i--;
    }
    while (i >= 0)
    {
        ans.push_back(nums[i] + crr);
        crr = 0;
        i--;
    }
    while (k > 0)
    {
        ans.push_back(k % 10 + crr);
        crr = 0;
        k /= 10;
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
}

int main()
{

    vector<int> nums = {1, 3, 5};
    int k = 2375;
    addToArrayForm(nums, k);
    return 0;
}