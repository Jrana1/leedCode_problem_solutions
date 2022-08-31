// problem link: https://leetcode.com/problems/reverse-words-in-a-string-iii

#include <bits/stdc++.h>
using namespace std;

void myReverse(string &s, int st, int end)
{

    while (st < end)
    {

        swap(s[st], s[end]);
        st++;
        end--;
    }
}

string reverseWords(string s)
{

    int i = 0;
    int st = 0;
    while (true)
    {

        if (i == s.size())
        {
            myReverse(s, st, i - 1);
            break;
        }
        if (s.at(i) == ' ')
        {

            myReverse(s, st, i - 1);
            st = i + 1;
        }
        i++;
    }
    return s;
}

int main()
{

    string s = "Let's take LeetCode contest";
    cout << reverseWords(s) << endl;

    return 0;
}