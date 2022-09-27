// problem link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/

#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s, int k)
{

    unordered_map<char, int> mp;

    for (int i = 0; i < s.size(); i++)
    {

        mp[s[i]]++;
    }

    for (auto it = mp.begin(); it != mp.end(); it++)
    {

        while (it->second >= k)
        {
            it->second -= k;
        }
    }
    // s.clear();
    string str;
    for (int i = 0; i < s.size(); i++)
    {
        auto it = mp.find(s[i]);
        if (it->second > 0)
        {
            while (it->second--)
            {
                str += it->first;
            }
        }
    }

    return str;
}

int main()
{

    string str = "yfttttfbbbbnnnnffbgffffgbbbbgssssgthyyyy";

    cout << removeDuplicates(str, 4);

    return 0;
}