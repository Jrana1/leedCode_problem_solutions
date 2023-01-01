#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {

        vector<string> strs;

        stringstream ss(s);

        while (!ss.eof())
        {
            string str;
            getline(ss, str, ' ');
            strs.push_back(str);
        }

        unordered_map<char, string> mp;

        if (strs.size() != pattern.size())
        {

            return false;
        }

        for (int i = 0; i < pattern.size(); i++)
        {

            if (mp.find(pattern[i]) == mp.end())
            {

                for (auto it = mp.begin(); it != mp.end(); it++)
                {

                    if (it->second == strs[i])
                    {

                        return false;
                    }
                }
                mp.insert({pattern[i], strs[i]});
            }
            else
            {

                auto it = mp.find(pattern.at(i));
                if (it->second != strs[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};

int main()
{

    Solution s;
    cout << s.wordPattern("abba", "dog cat cat dog") << endl;

    return 0;
}