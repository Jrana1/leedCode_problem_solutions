#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxPoints(vector<vector<int>> &points)
    {
        int n = points.size();
        int result = INT_MIN;

        for (int i = 0; i < n; i++)
        {

            map<pair<int, int>, int> mp;

            int overlap = 0;
            int vertical = 0;
            for (int j = 0; j < n; j++)
            {

                if (i == j)
                {
                    continue;
                }

                else if (points[i][0] == points[j][0] && points[i][1] == points[j][1])
                {
                    overlap++;
                }
                else if ((points[i][0] - points[j][0]) == 0 || (points[i][1] - points[j][1]) == 0)
                {
                    vertical++;
                }
                else
                {

                    int x = (points[i][0] - points[j][0]);
                    int y = (points[i][1] - points[j][1]);
                    int gcd = __gcd(x, y);
                    mp[{x / gcd, y / gcd}]++;
                }
            }
            int curr_max = INT_MIN;
            for (auto it = mp.begin(); it != mp.end(); it++)
            {

                curr_max = max(curr_max, it->second);
            }
            result = max(result, max(vertical + 1, curr_max + overlap + 1));
        }
        return result;
    }

    void solve(string s)
    {

        stack<char> st;
        st.push(s.at(0));

        int n = s.size();
        for (int i = 1; i < n; i++)
        {

            if (st.empty())
            {
                st.push(s.at(i));
                continue;
            }
            if (!st.empty() && st.top() != s.at(i))
            {

                st.push(s.at(i));
            }
            else
            {

                st.pop();
            }
        }
        string ans = "";
        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
};

int main()
{

    // vector<vector<int>> points = {

    //     {9, -25},
    //     {-4, 1},
    //     {-1, 5},
    //     {-7, 7}};

    Solution s;
    s.solve("aaabbaaccd");
    // cout
    //     << s.maxPoints(points) << endl;

    return 0;
}