// problem link: https://leetcode.com/problems/count-asterisks/

#include <bits/stdc++.h>
using namespace std;
int fun(string s)
{
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i < s.size(); i++)
    {

        if ((s[i] + 32 == st.top()) || (st.top() + 32 == s[i]))
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    s.clear();
    while (!st.empty())
    {

        s += st.top();
        st.pop();
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}
int main()
{

    string s = "abBAcC";

    fun(s);

    return 0;
}