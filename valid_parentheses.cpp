// problem link: https://leetcode.com/problems/valid-parentheses/

#include <bits/stdc++.h>
using namespace std;

bool is_Valid_Parentheses(string s)
{
    if (s.length() == 1)
        return false;
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return false;
            else if ((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '['))
            {

                st.pop();
            }
            else
            {
                return false;
            }
        }
    }
    // cout << st.top() << endl;
    return st.empty() ? true : false;
}
int main()
{
    string str = "(){}}{";
    cout << is_Valid_Parentheses(str) << endl;

    return 0;
}