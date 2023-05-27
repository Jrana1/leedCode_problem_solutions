#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int diagonalPrime(vector<vector<int>> &nums)
    {
        int n = nums.size();
        int m = nums[0].size();
        int maxPrime = INT_MIN;
        for (int i = 0, j = 0; i < n and j < m; i++, j++)
        {
            if (isPrime(nums[i][j]))
            {
                maxPrime = max(maxPrime, nums[i][j]);
            }
        }
        for (int i = 0, j = m - 1; i < n and j >= 0; i++, j--)
        {
            if (isPrime(nums[i][j]))
            {
                maxPrime = max(maxPrime, nums[i][j]);
            }
        }
        // cout << maxPrime << endl;
        return maxPrime == INT_MIN ? 0 : maxPrime;
    }
    bool isPrime(int n)
    {
        if (n < 2)
            return false;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
};