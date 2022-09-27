// problem link: https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/

#include <bits/stdc++.h>
using namespace std;
vector<int> finalPrices(vector<int> &prices)
{

    vector<int> ans;
    for (int i = 0; i < prices.size(); i++)
    {
        int j;
        for (j = i + 1; j < prices.size(); j++)
        {
            if (prices[j] <= prices[i])
            {

                ans.push_back(prices[i] - prices[j]);
                break;
            }
        }
        if (j == prices.size())
        {

            ans.push_back(prices[i]);
        }
    }

    return ans;
}
int main()
{
    vector<int> nums = {4, 7, 1, 9, 4, 8, 8, 9, 4};

    vector<int> ans = finalPrices(nums);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}