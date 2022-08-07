// problem link: https://leetcode.com/problems/first-unique-character-in-a-string

#include <bits/stdc++.h>
using namespace std;
// brute force solution in O(n^2) time complexity
int firstUniqChar(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        int j;
        for (j = 0; j < s.size(); j++)
        {
            if (s[i] == s[j] && i != j)
            {
                break;
            }
        }
        if (j == s.size())
        {
            return i;
        }
    }
    return -1;
}

/// using extra space

// time complexity O(n) space comlexity (1)
int firstUniqChar1(string s)
{
    vector<int> hash_table(200);
    for (int i = 0; i < s.size(); i++)
    {
        hash_table[s[i]]++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (hash_table[s[i]] == 1)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    string str = "loveleedcode";
    cout << firstUniqChar1(str) << endl;

    return 0;
}