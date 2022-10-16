// problme link: https://leetcode.com/problems/self-dividing-numbers/

#include <bits/stdc++.h>
using namespace std;
bool isSelfDividing(int i)
{

    int tmp = i;
    while (i > 0)
    {

        int digit = i % 10;
        // cout << tmp % digit << endl;
        if (digit == 0 || tmp % digit == 1)
        {
            return false;
        }
        i /= 10;
    }
    return true;
}
vector<int> selfDividingNumbers(int left, int right)
{

    vector<int> ans;
    for (int i = left; i <= right; i++)
    {

        if (isSelfDividing(i))
        {
            ans.push_back(i);
        }
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
}
int main()
{
    selfDividingNumbers(1, 22);

    return 0;
}