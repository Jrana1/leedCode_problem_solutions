// problem link: https://leetcode.com/problems/guess-number-higher-or-lower

#include <bits/stdc++.h>
using namespace std;
int guess(int x)
{
    int ans = 22;
    if (x > ans)
    {
        return -1;
    }
    if (x == ans)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int guessNumber(int n)
{

    int st = 1;
    int end = n;
    while (st <= end)
    {

        int mid = (st + end) / 2;
        if (guess(mid) == 0)
        {
            return mid;
        }
        else if (guess(mid) == -1)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return -1;
}
int main()
{
    cout << guessNumber(20) << endl;
    return 0;
}