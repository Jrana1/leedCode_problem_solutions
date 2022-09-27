// problem link: https://leetcode.com/problems/largest-perimeter-triangle/

#include <bits/stdc++.h>
using namespace std;
bool cmp(const int &a, const int &b)
{
    a > b ? false : true;
}
int largestPerimeter(vector<int> &nums)
{

    // double s = 0;
    sort(nums.begin(), nums.end(), greater<int>());
    for (int i = 0; i < nums.size() - 2; i++)
    {
        double s = (double)(nums[i] + nums[i + 1] + nums[i + 2]) / 2;
        // cout << s << endl;
        if (sqrt(s * (s - nums[i]) * (s - nums[i + 1]) * (s - nums[i + 2])) > 0)
        {
            return (nums[i] + nums[i + 1] + nums[i + 2]);
        }
    }
    // return 0;
    // double area = sqrt(s * (s - nums[0]) * (s - nums[1]) * (s - nums[2]));
    // if (area == 0)
    //     return 0;
    // return s * 2;
    return 0;
}
int main()
{
    vector<int> nums = {1, 2, 1};
    cout << largestPerimeter(nums) << endl;
    return 0;
}