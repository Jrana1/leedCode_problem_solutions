#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        set<vector<int>> st;
        vector<int> curr;
        solve(nums, curr, st, 0);
        vector<vector<int>> ans;
        for (auto it = st.begin(); it != st.end(); it++)
        {
            ans.push_back(*it);
        }
        return ans;
    }
    void solve(vector<int> &nums, vector<int> curr, set<vector<int>> &st, int idx)
    {

        if (idx >= nums.size())
        {

            st.insert(curr);
            return;
        }
        solve(nums, curr, st, idx + 1);
        curr.push_back(nums[idx]);
        solve(nums, curr, st, idx + 1);
    }
};

int main()
{
    Solution s = Solution();
    vector<int> nums = {1, 2, 2};
    // s.subsetsWithDup(nums);

    bitset<32> binary(-1);
    string str = binary.to_string();
    int i = 0;
    while (str[i] != '1')
        i++;

    map<int, char> mp;
    for (int x = 10; x < 16; x++)
    {
        int tmp = x - 10;
        mp.insert({x, (char)('a' + tmp)});
    }

    string hex = "";

    int n = 31;
    while (n >= i)
    {

        int sum = 0;
        int m = n;
        for (int k = 0; k < 4; k++)
        {
            sum += (str[m] - '0') * pow(2, k);
            cout << m << endl;
            m--;
        }
        cout << sum << endl;
        if (sum < 10)
        {
            hex += to_string(sum);
        }
        else
        {
            hex += mp.find(sum)->second;
        }
        n -= 4;
    }
    cout << hex << endl;
    return 0;
}