// problem link: https://leetcode.com/problems/implement-strstr

#include <bits/stdc++.h>
using namespace std;

int strStr(string s1, string s2)
{

    for (int i = 0; i < s1.size(); i++)
    {

        if (s2[0] == s1[i])
        {

            int x = i;
            int y = 0;
            while (s1[x] == s2[y] && s1[x] != '\0' && s1[y] != '\0')
            {
                // cout << s1[x] << " " << s2[y] << " " << x << " " << y << endl;
                x = x + 1;
                y = y + 1;
            }
            // cout << "out" << endl;
            if (y == s2.size())
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{

    string s1 = "abcdebdi";
    string ans = s1.substr(2, 4);
    cout << ans << endl;

    return 0;
}