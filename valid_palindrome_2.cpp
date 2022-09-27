// problem link: https://leetcode.com/problems/valid-palindrome-ii/

#include <bits/stdc++.h>
using namespace std;
bool validPalindrome(string s)
{

    int st = 0;
    int en = s.size() - 1;
    int cnt = 0;
    while (st < en)
    {

        if (s[st] != s[en])
        {
            cnt++;
        }
        st++, en--;
    }
    return cnt > 1 ? false : true;
}

int main()
{

    string s = "deeee";
    cout << validPalindrome(s) << endl;

    return 0;
}
