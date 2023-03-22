#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool checkDistances(string s, vector<int> &distance)
    {
        unordered_map<char, vector<int>> mp;

        int n = s.size();
        for (int i = 0; i < n; i++)
        {

            if (mp.find(s.at(i)) == mp.end())
            {

                vector<int> tmp(2, 0);
                tmp[0] = i;
                mp.insert({s.at(i), tmp});
            }
            else
            {
                auto it = mp.find(s.at(i));
                it->second[1] = i;
            }
        }

        for (int i = 0; i < n; i++)
        {
            auto it = mp.find(s.at(i));
            if (distance[s.at(i) - 'a'] != (it->second[1] - it->second[0] - 1))
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{

    vector<int> distance = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    Solution s = Solution();
    cout << s.checkDistances("aa", distance) << endl;
}