// problem link: https://leetcode.com/problems/powx-n/submissions
#include <bits/stdc++.h>
using namespace std;
double dp[1000] = {0};
double myFun(double x, int n)
{

    if (n == 1)
        return dp[n] = x;
    else
    {

        if (n % 2 == 0)
        {

            if (dp[n] == 0)
            {
                dp[n] = myFun(x, n / 2) * myFun(x, n / 2);
            }
            return dp[n];
        }
        else
        {
            if (dp[n] == 0)
            {

                dp[n] = myFun(x, n / 2) * myFun(x, n / 2) * x;
            }
            return dp[n];
        }
    }
}

double myPow(double x, int n)
{
    int tmp = abs(n);
    double res = myFun(x, tmp);
    if (n > 0)
        return res;
    return 1 / res;
}

double pow2(double x, int n)
{

    double res = 1;

    while (n)
    {

        if (n % 2 == 1)
        {
            res = res * x;
            n = n - 1;
        }
        else
        {
            x = x * x;
            n = n / 2;
        }
    }
    return res;
}

int main()
{
    cout << pow2(2.00, 5) << endl;

    return 0;
}