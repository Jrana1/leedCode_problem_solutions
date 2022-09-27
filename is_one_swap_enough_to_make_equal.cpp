// problem link: https://leetcode.com/problems/check-if-one-string-swap-can-make-strings-equal/

#include <bits/stdc++.h>
using namespace std;

bool fun(string s1, string s2)
{
    map<char, int> mp1;
    map<char, int> mp2;
    for (auto x : s1)
    {
        mp1[x]++;
    }
    for (auto x : s2)
    {
        mp2[x]++;
    }
    unordered_multiset<char> st;
    for (auto x : s1)
        st.insert(x);
    int cnt = 0;
    for (int i = 0; i < s2.size(); i++)
    {
        if (st.find(s2[i]) != st.end())
        {
            if (s1[i] != s2[i])
            {
                cnt++;
            }
        }
        else
        {
            return false;
        }
        // cout << "doo" << endl;
    }
    if (cnt > 2)
    {
        return false;
    }
    return true;
}

int main()
{

    string s1 = "bank";
    string s2 = "kanb";
    cout << fun(s1, s2) << endl;
    return 0;
}