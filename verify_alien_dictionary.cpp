
// problem link: https://leetcode.com/problems/verifying-an-alien-dictionary/

#include <bits/stdc++.h>
using namespace std;

bool isAlienSorted(vector<string> &words, string order)
{

    unordered_multimap<char, int> mp;
    for (int i = 0; i < order.size(); i++)
    {
        mp.insert(pair<char, int>(order[i], i));
    }
    for (int i = 0; i < words.size() - 1; i++)
    {

        int len1 = words[i].size();
        int len2 = words[i + 1].size();
        // if (len1 > len2)
        // {
        //     return false;
        // }
        int j = 0;
        while (j < len1 && j < len2 && words[i].at(j) == words[i + 1].at(j))
        {
            j++;
        }
        // if(j==len1 && j==len2){continue;}
        if (j >= len1 && j <= len2)
        {
            continue;
        }
        if (j < len1 && j >= len2)
        {
            return false;
        }
        auto it1 = mp.find(words[i].at(j));
        auto it2 = mp.find(words[i + 1].at(j));
        // cout << it1->first << " " << it2->first << endl;
        if (it1->second > it2->second)
        {
            // cout << it1->first << " goin " << it2->first << endl;
            return false;
        }
    }

    return true;
}

int main()
{

    vector<string> words = {"app", "apple"};
    string order = "abcdefghijklmnopqrstuvwxyz";
    cout << isAlienSorted(words, order) << endl;

    return 0;
}
