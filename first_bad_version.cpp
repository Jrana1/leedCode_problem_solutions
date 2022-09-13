// problem link: https://leetcode.com/problems/first-bad-version/

#include <bits/stdc++.h>
using namespace std;
#define g false
#define b true
vector<bool> ar = {g, g, g, g, b, b, b};
// API function
bool isBad(int version)
{

    return ar[version];
}

int fun(int n)
{

    int ans = n;
    int st = 0;
    int end = n - 1;

    while (st <= end)
    {

        int mid = (st + end) / 2;
        if (isBad(mid))
        {
            ans = min(ans, mid);
            end = mid - 1;
            // cout << mid << endl;
        }
        else
        {
            st = mid + 1;
        }
    }
    cout << ans << endl;
}

int main()
{

    fun(7);

    return 0;
}