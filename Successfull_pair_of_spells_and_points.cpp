#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {

        int n = spells.size();
        int m = potions.size();
        vector<int> ans;
        sort(potions.begin(), potions.end());
        for (int i = 0; i < n; i++)
        {
            long long req = success / spells[i];
            if (req % 2 == 1)
            {
                req++;
            }
            int pos = lower_bound(potions.begin(), potions.end(), req) - potions.begin();
            ans.push_back(m - pos)
        }

        return ans;
    }
};

int main()
{

    Solution s = Solution();
    vector<int> spells = {5, 1, 3};
    vector<int> potions = {1, 2, 3, 4, 5};
    s.successfulPairs(spells, potions, 7);

    return 0;
}