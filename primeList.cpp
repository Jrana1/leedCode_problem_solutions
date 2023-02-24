#include <bits/stdc++.h>
using namespace std;

// https://practice.geeksforgeeks.org/problems/6cb0782855c0f11445b8d70e220f888e6ea8e22a/1

bool isPrime(int n)
{

    for (int i = 2; i <= sqrt(n); i++)
    {

        if (n % i == 0)
        {

            return false;
        }
    }
    return true;
}

vector<bool> Sieve_of_Eratosthenes(int n)
{

    // int[] primes = new int[n + 10];
    // List<Integer> primes = new ArrayList<>();
    vector<bool> primes(n + 1, true);
    // for (int x = 1; x <= n; x++)
    // {
    //     // primes.add(x, 1);
    //     primes[x] = '1';
    // }
    primes[1] = false;
    for (int i = 2; i <= sqrt(n); i++)
    {

        if (primes[i] == true)
        {
            for (int j = 2; i * j <= n; j++)
            {
                // primes[i * j] = 0;
                primes[i * j] = false;
            }
        }
    }
    return primes;
}

int main()
{

    vector<bool> primes = Sieve_of_Eratosthenes(20);

    for (int i = 0; i < primes.size(); i++)
    {

        if (primes[i])
        {
            cout << i << endl;
        }
    }

    // vector<int> nums = {2, 6, 10};

    // for (auto x : nums)
    // {
    //     int num = x;
    //     int left = num - 1;
    //     int right = num + 1;
    //     while (left > 2 || right < INT_MAX)
    //     {

    //         if (isPrime(left) && isPrime(right))
    //         {

    //             cout << min(left, right) << endl;
    //             break;
    //         }
    //         else if (isPrime(left))
    //         {

    //             cout << left << endl;
    //             break;
    //         }
    //         else if (isPrime(right))
    //         {

    //             cout << right << endl;
    //             break;
    //         }

    //         left--;
    //         right++;
    //     }
    //}

    return 0;
}