#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
    {
        unordered_map<string, int> mp;
        mp.insert({"type", 0});
        mp.insert({"color", 1});
        mp.insert({"name", 2});
        int target = mp.find(ruleKey)->second;

        int n = items.size();
        int ans = 0;
        for (int i = 0; i < n; i++)
        {

            if (items[i][target] == ruleValue)
                ans++;
        }
        return ans;
    }
};

int main()
{

    vector<vector<string>> items = {
        {"phone", "blue", "pixel"},
        {"computer", "silver", "phone"},
        {"phone", "gold", "iphone"}};
    Solution s = Solution();
    cout << s.countMatches(items, "type", "phone") << endl;
    return 0;
}