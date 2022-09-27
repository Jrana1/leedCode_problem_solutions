// problem link: https://leetcode.com/problems/count-odd-numbers-in-an-interval-range
#include <bits/stdc++.h>
using namespace std;
// in O(1) time complexity
int count_odd(int low, int high)
{
    // Case 1: both low and hight are odd
    if (low % 2 == 1 && high % 2 == 1)
    {
        return (high - low - 2) / 2 + 2;
    }
    // Case 2: low odd high even or low even high odd
    if ((low % 2 == 0 && high % 2 == 1) || (low % 2 == 1 && high % 2 == 0))
    {
        return (high - low - 1) / 2 + 1;
    }
    /// Case 3: both low and high even
    if (low % 2 == 0 && high % 2 == 0)
    {
        return (high - low) / 2;
    }
}

int main()
{

    // cout << count_odd(2, 7) << endl;
    cout << max(3, 9) << endl;

    return 0;
}