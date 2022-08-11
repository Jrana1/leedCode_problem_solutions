// problem link: https://leetcode.com/problems/valid-anagram

#include <bits/stdc++.h>
using namespace std;

// solution in O(nlogn) time
bool isAnagramm(string s1, string s2)
{

    if (s1.length() != s2.length())
        return false;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
    {
        return true;
    }
    return false;
}

// better solution in O(n) time but O(n+n) space. using two hash table

bool isAnagramm1(string s, string t)
{
    if (s.length() != t.length())
        return false;
    vector<int> h1(26), h2(26);

    for (int i = 0; i < s.size(); i++)
    {
        h1[s[i] - 'a']++;
        h2[t[i] - 'a']++;
    }
    for (int x = 0; x < 26; x++)
    {
        if (h1[x] != h2[x])
        {
            return false;
        }
    }
    return true;
}
/// using only one hash table

bool isAnagramm2(string s, string t)
{
    if (s.length() != t.length())
        return false;
    vector<int> h1(26);

    for (int i = 0; i < s.size(); i++)
    {
        h1[s[i] - 'a']++;
        // h2[t[i] - 'a']++;
    }

    for (int i = 0; i < t.size(); i++)
    {
        h1[t[i] - 'a']--;
        // h2[t[i] - 'a']++;
    }

    for (int x = 0; x < 26; x++)
    {
        if (h1[x] != 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{

    string s1 = "cat";
    string s2 = "tac";

    cout << isAnagramm2(s1, s2) << endl;

    return 0;
}