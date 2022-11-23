#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

bool isUgly(int n)
{
    if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5)
    {
        return true;
    }
    if (n == 0)
    {
        return false;
    }
    for (int i = 6; i <= n; i++)
    {

        if (n % i == 0 && isPrime(i) && (i != 2 || i != 3 || i != 5))
        {

            return false;
        }
    }
    return true;
}

int main()
{

    cout << isUgly(-2147483648) << endl;

    return 0;
}