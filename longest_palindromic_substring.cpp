/// problem link: https://leetcode.com/problems/longest-palindromic-substring

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str, int st, int end)
{

    for (int i = st, j = end - 1; i < j; j--, i++)
    {

        if (str[i] != str[j])
        {
            return false;
        }
    }
    return true;
}

string LPSStr(string str)
{

    int mx = 0;
    int st, end;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = i; j < str.size(); j++)
        {
            if (isPalindrome(str, i, j + 1))
            {
                // mx = max(mx, j - i + 1);
                if (mx < j - i + 1)
                {
                    mx = j - i + 1;
                    st = i;
                    end = j;
                }
            }
        }
    }

    string res;
    for (int i = st; i <= end; i++)
    {
        res += str[i];
    }
    return res;
}
/// only for odd palindrome
int LPSStr1(string str)
{
    if (str.size() == 1)
        return 1;

    int mx = 0;
    for (int center = 1; center < str.size() - 1; center++)
    {

        int cnt = 1;
        for (int i = center - 1, j = center + 1; i >= 0 && j <= str.size() - 1; i--, j++)
        {

            if (str[i] != str[j])
            {
                break;
            }
            else
            {
                cnt += 2;
            }
            // cout << str[i] << " " << str[j] << endl;
        }
        mx = max(mx, cnt);
    }
    return mx;
}

int main()
{

    return 0;
}