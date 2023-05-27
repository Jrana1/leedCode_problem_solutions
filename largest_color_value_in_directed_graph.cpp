#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int similarPairs(vector<string> &words)
    {
        int n = words.size();
        vector<int> ht(n, 0);
        for (int i = 0; i < n; i++)
        {
            int len = words[i].size();
            int musk = 0;
            for (int j = 0; j < len; j++)
            {

                musk |= (1 << (words[i][j] - 'a'));
            }
            ht[i] = musk;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i < j and ht[i] == ht[j])
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
        return ans;
    }
};
int main()
{
    vector<string> strs = {"aba", "aabb", "abcd", "bac", "aabc"};
    Solution s = Solution();
    //  s.similarPairs(strs);
    char c = 'A' + 2;
    cout << 'B' - c << endl;
    return 0;
}