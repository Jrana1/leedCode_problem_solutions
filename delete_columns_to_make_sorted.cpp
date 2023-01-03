#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minDeletionSize(vector<string> &strs)
    {

        int cnt = 0;
        int n = strs.size();
        int m = strs[0].size();

        for (int i = 0; i < m; i++)
        {
            string tmp1 = "";
            string tmp2 = "";
            for (int j = 0; j < n; j++)
            {
                // if (!(strs[j].at(i) < strs[j + 1].at(i)))
                // {
                //     // cout << strs[j].at(i) << " " << strs[j + 1].at(i) << endl;
                //     cnt++;
                //     break;
                // }
                tmp1 += strs[j].at(i);
                tmp2 += strs[j].at(i);
                // cout << strs[j].at(i);
            }

            // cout << tmp1 << " " << tmp2 << endl;
            sort(tmp1.begin(), tmp1.end());
            if (tmp1 != tmp2)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
};
int main()
{

    Solution s;

    vector<string> strs = {"rrjk", "furt", "guzm"};
    s.minDeletionSize(strs);
    //  vector<string> strs = {"zyx", "wvu", "tsr"};

    return 0;
}