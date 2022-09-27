#include <bits/stdc++.h>
using namespace std;

// Naive solution O(N^3) time and O(N) space complexity
int lengthOfLongestSubstring(string s)
{
    int n = s.size();
    int len = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            set<char> st;
            string str;
            for (int k = i; k <= j; k++)
            {
                st.insert(s[k]);
                str += s[k];
                // cout << s[k];
            }
            // cout << endl;
            if (st.size() == str.size())
            {
                int r = st.size();
                len = max(len, r);
            }
        }
    }
    // cout << len << endl;
}
int lengthOfLongestSubstring1(string s)
{

    int max_len = 0;
    int l = 0, r = 0;
    unordered_set<char> st;
    while (s[r] != '\0')
    {

        if (st.find(s[r]) == st.end())
        {
            st.insert(s[r]);
            r++;
        }
        else
        {
            while (st.find(s[r]) != st.end())
            {

                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            r++;
        }
        max_len = max(max_len, r - l);
    }
    return max_len;
}
int main()
{

    string s = "abcabcbb";
    // cout << s.size() << endl;
    cout << lengthOfLongestSubstring1(s) << endl;

    return 0;
}