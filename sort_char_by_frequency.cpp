#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string frequencySort(string s)
    {

        unordered_map<char, int> mp;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {

            mp[s.at(i)]++;
        }
        vector<pair<char, int>> tmp;
        for (auto it = mp.begin(); it != mp.end(); it++)
        {

            tmp.push_back({it->first, it->second});
        }

        sort(tmp.begin(), tmp.end(), [](auto a, auto b) -> bool
             { return a.second > b.second; });
        string ans = "";
        for (auto it = tmp.begin(); it != tmp.end(); it++)
        {

            while (it->second--)
            {
                ans += it->first;
            }
        }
        cout << ans << endl;
    }
};
int main()
{

    Solution s;
    // cout << 'b' - 'a' << endl;
    s.frequencySort("Aabb");
    return 0;
}