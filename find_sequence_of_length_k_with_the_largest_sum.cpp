#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxSubsequence(vector<int> &nums, int k)
    {

        priority_queue<pair<int, int>, vector<pair<int, int>>> pq;
        for (int x = 0; x < nums.size(); x++)
        {
            pq.push({nums[x], x});
        }
        vector<int> ans, tmp;
        while (k--)
        {
            pair<int, int> it = pq.top();
            tmp.push_back(it.second);
            pq.pop();
        }

        sort(tmp.begin(), tmp.end());
        for (auto x : tmp)
        {
            ans.push_back(nums[x]);
        }
        return ans;
    }
};

int main()
{

    vector<int> v = {3, 4, 3, 3};
    Solution s;
    s.maxSubsequence(v, 2);

    return 0;
}