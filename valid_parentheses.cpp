// problem link: https://leetcode.com/problems/valid-parentheses/

#include <bits/stdc++.h>
using namespace std;

bool is_Valid_Parentheses(string s)
{

    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        if ((s[i] == ')' && st.top() == '(') || (s[i] == '}' && st.top() == '{') || (s[i] == ']' && st.top() == '['))
        {

            st.pop();
        }
    }
    // cout << st.top() << endl;
    return st.empty() ? true : false;
}
int main()
{
    string str = "()[]{}";
    cout << is_Valid_Parentheses(str) << endl;

    return 0;
}