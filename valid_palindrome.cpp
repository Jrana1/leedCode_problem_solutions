// problem link: https://leetcode.com/problems/valid-palindrome/

#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    int st = 0;
    int en = s.size() - 1;
    while (st < en)
    {

        if (!isalnum(s[st]))
        {
            st++;
        }
        else if (!isalnum(s[en]))
        {
            en--;
        }
        else
        {
            if (towlower(s[st]) != towlower(s[en]))
            {
                return false;
            }
            st++, en--;
        }
    }
    return true;
}
int main()
{

    string s = "0p";

    cout << isValid(s) << endl;

    return 0;
}