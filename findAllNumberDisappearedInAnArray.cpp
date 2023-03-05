#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums.at(abs(nums.at(i)) - 1) > 0)
            {
                nums.at(abs(nums.at(i)) - 1) *= (-1);
            }
        }
        vector<int> ans;
        for (auto x = 0; x < nums.size(); x++)
        {
            if (nums.at(x) > 0)
            {
                ans.push_back(x + 1);
            }
        }
        return ans;
    }
};

int main()
{

    Solution s = Solution();

    vector<int> vc = {4, 3, 2, 7, 8, 2, 3, 1};
    s.findDisappearedNumbers(vc);

    return 0;
}