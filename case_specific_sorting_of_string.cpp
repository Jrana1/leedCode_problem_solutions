#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here

        vector<int> idxSmall;
        vector<int> idxBig;
        string small = "", big = "";
        for (int i = 0; i < n; i++)
        {

            if (str.at(i) >= 'a' && str.at(i) <= 'z')
            {

                idxSmall.push_back(i);
                small += str.at(i);
            }
            else
            {
                idxBig.push_back(i);
                big += str.at(i);
            }
        }
        sort(small.begin(), small.end());
        sort(big.begin(), big.end());
        vector<char> tmp(n);
        for (int i = 0; i < idxSmall.size(); i++)
        {

            tmp[idxSmall[i]] = small.at(i);
        }
        for (int i = 0; i < idxBig.size(); i++)
        {

            tmp[idxBig[i]] = big.at(i);
        }
        string ans = "";
        for (char x : tmp)
        {
            ans += x;
        }
        cout << ans << endl;
    }
};
int main()
{

    Solution s;
    s.caseSort("defRTSersUXI", 12);

    return 0;
}