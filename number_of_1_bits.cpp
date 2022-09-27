
// problem link: https://leetcode.com/problems/number-of-1-bits/

#include <bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n)
{

    int mask = 1;
    int cnt = 0;

    for (int i = 0; i < 32; i++)
    {

        int res = n & (mask << i);
        if (res != 0)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    vector<int> v1 = {1, 2, 6, 10};
    vector<int> v2 = {0, 4, 10, 15};
    pair_sum(v1, v2, 10);

    return 0;
}