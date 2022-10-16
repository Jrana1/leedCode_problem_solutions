// problem link : https://leetcode.com/problems/minimum-bit-flips-to-convert-number

#include <bits/stdc++.h>
using namespace std;
int minBitFlips(int start, int goal)
{

    int mask = 1;
    for (int i = 0; i < 32; i++)
    {

        int last_bit_start = start & (mask << i);
        int last_bit_goal = goal & (mask << i);
        if (last_bit_goal != last_bit_start)
        {
            if (last_bit_start != 0)
            {
                start = start | (mask << i);
                cout << start << "   ";
            }
            else
            {
                start = start ^ (mask << i);
                cout << start << "   ";
            }
            // cout << "hlao" << endl;
            // }
        }
        // cout << start << " " << goal << endl;
    }
}
int main()
{
    minBitFlips(12, 2);
    return 0;
}