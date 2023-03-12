#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mostFrequentEven(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] % 2 == 0)
                mp[nums[i]]++;
        }
        if (mp.size() == 0)
        {
            return -1;
        }
        vector<pair<int, int>> tmp;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {

            tmp.push_back({it->first, it->second});
        }

        sort(tmp.begin(), tmp.end(), [](auto a, auto b) -> bool
             { return a.second == b.second ? a.first < b.first : a.second > b.second; });

        return tmp[0].first;
    }
};
int main()
{

    Solution s = Solution();
    vector<int> ar = {4, 4, 4, 9, 2, 4};
    s.mostFrequentEven(ar);

    return 0;
}