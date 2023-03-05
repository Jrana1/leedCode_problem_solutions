#include <bits/stdc++.h>
using namespace std;

#define equal ==
#define l <
#define g >
#define le <=
#define ge >=
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        unordered_set<char> st;

        int n = s.size();
        int m = t.size();
        for (int i = 0; i < n; i++)
        {
            st.insert(s.at(i));
        }
        for (int i = 0; i < m; i++)
        {

            if (st.find(t.at(i)) == st.end())
            {
                t.at(i) = '1';
            }
        }
        string ans = "";
        for (int i = 0; i < m; i++)
        {

            if (t.at(i) != '1')
            {
                ans += t.at(i);
            }
        }

        return s == ans;
    }

    bool isSubsequence1(string s, string t)
    {

        int n = s.size();
        int m = t.size();

        int i = 0, j = 0;

        for (int j = 0; j < m and i < n; j++)
        {

            if (s.at(i) == t.at(j))
                i++;
        }
        return i == n;
    }
};

int main()
{

    return 0;
}