// problem link: https://leetcode.com/problems/ransom-note/

#include <bits/stdc++.h>
using namespace std;
vector<int> h1(26);
vector<int> h2(26);

/// using two hash table in O(n) time complexity

bool canConstruct(string ransomNote, string magazine)
{
    if (magazine.size() < ransomNote.size())
    {
        return false;
    }

    for (int i = 0; i < ransomNote.size(); i++)
    {
        h1[ransomNote[i] - 'a']++;
    }

    for (int i = 0; i < magazine.size(); i++)
    {
        h2[magazine[i] - 'a']++;
    }

    for (int i = 0; i < ransomNote.size(); i++)
    {
        int x = ransomNote[i] - 'a';
        if (h1[x] > h2[x])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1 = "a";
    string s2 = "b";
    cout << canConstruct(s1, s2) << endl;
    return 0;
}