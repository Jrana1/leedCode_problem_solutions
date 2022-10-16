// problem linK: https://leetcode.com/problems/longest-palindrome/description/

#include <bits/stdc++.h>
using namespace std;
int longestPalindrome(string s)
{

    vector<int> ht(26 * 2, 0);

    for (int x = 0; x < s.size(); x++)
    {
        if (s.at(x) <= 'z' && s.at(x) >= 'a')
        {
            ht[s.at(x) - 'a']++;
        }
        else
        {
            ht[s.at(x) - 'A' + 26]++;
        }
    }
    int len = 0;
    for (auto x : ht)
    {
        len += (x / 2) * 2;
        if (len % 2 == 0 && x % 2 == 1)
        {
            len++;
        }
    }

    cout << len << endl;
}
int main()
{

    string s = "avccccddABB";
    longestPalindrome(s);

    return 0;
}