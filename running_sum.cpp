
#include <bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int> &nums)
{
    // cout << "fjla" << endl;
    vector<int> ans;
    ans.push_back(nums[0]);
    for (int i = 1; i < nums.size(); i++)
    {
        ans.push_back(nums[i] + ans[i - 1]);
    }
    return ans;
}

int main()
{
    vector<int> nums = {1, 1, 1, 1, 1};
    nums = runningSum(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << endl;
    }
    return 0;
}