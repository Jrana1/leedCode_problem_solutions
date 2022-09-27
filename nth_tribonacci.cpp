#include <bits/stdc++.h>
using namespace std;
int dp[37] = {-1};
int tribo(int n)
{
    if (n == 0)
    {
        return dp[n] = 0;
    }
    if (n == 1 || n == 2)
    {
        return dp[n] = 1;
    }
    else
    {

        if (dp[n] != -1)
        {

            dp[n] = tribo(n - 1) + tribo(n - 2) + tribo(n - 3);
        }

        return dp[n];
    }
}

int main()
{
    cout << tribo(5) << endl;
    return 0;
}