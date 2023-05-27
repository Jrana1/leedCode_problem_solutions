#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minIncrementForUnique(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;
        for (int i = 1; i < nums.size(); i++)
        {

            while (nums[i] <= nums[i - 1])
            {
                nums[i] += 1;
                ans++;
            }
        }
        cout << ans << endl;
        return 2;
    }
    int minIncrementForUniqueOpt(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        int n = nums.size();
        int ans = 0;
        for (int i = 1; i < nums.size(); i++)
        {

            if (nums[i] <= nums[i - 1])
            {
                int tmp = abs(nums[i] - nums[i - 1]) + 1;
                nums[i] += tmp;
                ans += tmp;
            }
        }
        cout << ans << endl;
        return 2;
    }
};
int main()
{

    Solution *s = new Solution();
    vector<int> vec = {3, 2, 1, 2, 1, 7};
    s->minIncrementForUniqueOpt(vec);

    return 0;
}