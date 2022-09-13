// problem link: https://leetcode.com/problems/counting-bits/

#include <bits/stdc++.h>
using namespace std;

// function to find no of 1's in a given number
int count(int n)
{

    int mask = 1;
    int cnt = 0;
    for (int i = 0; i < 32; i++)
    {

        if ((n & (mask << i)) != 0)
        {
            cnt++;
        }
    }
    return cnt;
}

vector<int> countBits(int n)
{

    vector<int> ans;

    for (int i = 0; i <= n; i++)
    {
        ans.push_back(count(i));
    }
    return ans;
}
int main()
{

    vector<int> ans = countBits(5);
    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}