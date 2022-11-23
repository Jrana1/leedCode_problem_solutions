// problem link: https://leetcode.com/problems/happy-number

#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
bool isHappy(int n)
{

    set<string> st;
    while (1)
    {

        set<string> st;
        while (1)
        {

            string num = to_string(n);
            if (st.count(num) > 0)
            {
                return false;
            }
            st.insert(num);
            int square_sum = 0;
            for (int i = 0; i < num.size(); i++)
            {
                int x = num[i] - '0';
                square_sum += x * x;
            }
            // cout << square_sum << endl;
            if (square_sum == 1)
            {
                return true;
            }
            else
            {
                n = square_sum;
            }
        }

        return false;
    }
}
int main()
{

    int n;
    cin >> n;
    while (n--)
    {

        int i, num;
        cin >> i >> num;
        if (isPrime(num) && isHappy(num))
        {
            cout << i << " " << num << " "
                 << "YES" << endl;
        }
        else
        {
            cout << i << " " << num << " "
                 << "NO" << endl;
        }
    }

    return 0;
}