#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    string removeStars(string s)
    {
        int star = 0;
        int nonStar = -1;
        int n = s.size();
        while (star < n)
        {

            if (isalpha(s.at(star)))
            {
                star++;
            }
            else if (!isalpha(s.at(star)))
            {
                s[star] = '2';
                int i = star;
                while (i >= 0 and !isalpha(s[i]))
                {
                    i--;
                }
                s[i] = '2';
                star++;
            }
        }
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            if (isalpha(s.at(i)))
                ans += s.at(i);
        }
        return ans;
    }
};
int main()
{

    string str = "leet**cod*e";

    Solution s = Solution();
    cout << s.removeStars(str) << endl;

    return 0;
}