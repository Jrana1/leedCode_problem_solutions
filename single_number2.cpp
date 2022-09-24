// problem link: https://leetcode.com/problems/single-number-iii/

#include <bits/stdc++.h>
using namespace std;

vector<int> singleNumber(vector<int> &nums)
{

    // auto res = 0;
    // for (auto x : nums)
    // {

    //     res ^= x;
    // }
    int i = 0;
    int res = 2;
    while (1)
    {

        if ((res & (1 << i)) != 0)
        {
            break;
        }
        i++;
    }
    // cout << i << endl;
    int n1 = 0, n2 = 0;
    for (auto x : nums)
    {

        if ((x & (1 << i)) == 0)
        {
            n1 ^= x;
        }
        if ((x & (1 << i)) != 0)
        {
            n2 ^= x;
        }
    }
    cout << n1 << " " << n2 << endl;
}
int main()
{

    vector<int> nums = {1, 2, 1, 3, 2, 5};

    singleNumber(nums);

    return 0;
}