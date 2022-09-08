// problem link: https://leetcode.com/problems/merge-strings-alternately
#include <bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2)
{

    string ans = "";
    int i = 0, j = 0, k = 0;
    int len1 = word1.size();
    int len2 = word2.size();
    while (i < len1 && j < len2)
    {

        if (k % 2 == 0)
        {
            ans += word1[i];
            i++, k++;
        }
        else
        {
            ans += word2[j];
            j++, k++;
        }
    }
    while (i < len1)
    {
        ans += word1[i++];
    }
    while (j < len2)
    {
        ans += word2[j++];
    }
    return ans;
}

int main()
{
    string s1 = "abcd";
    string s2 = "pq";
    cout << mergeAlternately(s1, s2) << endl;

    return 0;
}