// problem link: https://leetcode.com/problems/find-the-difference

#include <bits/stdc++.h>
using namespace std;

char findTheDifference(string s, string t)
{

    vector<int> h1(26);
    // vector<int>h2;

    for (int i = 0; i < t.size(); i++)
    {

        h1[t[i] - 'a']++;
    }
    for (int i = 0; i < s.size(); i++)
    {

        h1[s[i] - 'a']--;
    }
    char ans;
    for (int i = 0; i < 26; i++)
    {
        if (h1[i] == 1)
        {
            ans = 'a' + i;
            break;
        }
    }
    return ans;
}

int main()
{

    string s = "abcd";
    string t = "abcde";
    cout << findTheDifference(s, t) << endl;

    return 0;
}