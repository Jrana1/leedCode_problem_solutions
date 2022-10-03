// problem link: https://leetcode.com/problems/sort-array-by-increasing-frequency/description/
#include <bits/stdc++.h>
using namespace std;

vector<int> frequencySort(vector<int> &nums)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {

        mp[nums[i]]++;
    }
    vector<pair<int, int>> pairs;
    for (auto it : mp)
    {
        pairs.push_back({it.first, it.second});
    }

    sort(pairs.begin(), pairs.end(), [](auto a, auto b) -> bool

         { return a.second == b.second ? a.first > b.first : a.second < b.second; });
    nums.clear();
    for (auto it = pairs.begin(); it != pairs.end(); it++)
    {

        int freq = it->second;
        while (freq--)
        {
            nums.push_back(it->first);
        }
    }
    for (auto x : nums)
    {
        cout << x << " ";
    }
}
int main()
{

    vector<int> v = {1, 1, 2, 2, 2, 3};
    frequencySort(v);
    return 0;
}