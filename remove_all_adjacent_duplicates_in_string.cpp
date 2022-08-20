// problem link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{

    if (s.length() == 1 || s.length() == 0)
        return s;
    stack<char> st;
    st.push(s[0]);

    for (int i = 1; i < s.length(); i++)
    {

        if (st.empty())
        {
            st.push(s[i]);
        }
        else
        {

            if (st.top() != s[i])
            {
                st.push(s[i]);
            }
            else
            {
                st.pop();
            }
        }
    }
    s.clear();
    while (!st.empty())
    {
        s += st.top();
        st.pop();
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{

    string s = "azxxzy";
    cout << removeDuplicates(s) << endl;

    return 0;
}