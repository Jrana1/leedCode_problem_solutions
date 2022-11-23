#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    bool judgeCircle(string moves)
    {

        int cntL = 0, cntR = 0, cntU = 0, cntD = 0;

        int n = moves.size();

        for (int i = 0; i < n; i++)
        {

            if (moves.at(i) == 'L')
            {
                cntL++;
            }
            if (moves.at(i) == 'R')
            {
                cntR++;
            }
            if (moves.at(i) == 'U')
            {
                cntU++;
            }
            if (moves.at(i) == 'D')
            {
                cntD++;
            }
        }

        return cntL == cntR && cntU == cntD;
    }
};

int main()
{

    Solution s;

    cout << s.judgeCircle("RLDRLU") << endl;

    return 0;
}