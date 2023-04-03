#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool digitCount(string num)
    {
        int *ht = new int[10];
        int n = num.size();
        for (int i = 0; i < n; i++)
        {

            ht[num.at(i) - '0']++;
        }
        for (int i = 0; i < n; i++)
        {

            if ((num.at(i) - '0') != ht[i])
            {
                return false;
            }
        }

        return true;
    }
};
int main()
{

    Solution s = Solution();
    cout << s.digitCount("1210") << endl;

    return 0;
}