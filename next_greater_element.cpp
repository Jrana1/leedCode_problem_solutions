// problem link: https://leetcode.com/problems/next-greater-element

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    unordered_map<int, int> mp;

    for (int i = 0; i < nums2.size(); i++)
    {

        mp.insert(pair<int, int>(nums2[i], i));
    }
    vector<int> res;
    bool found_next_greater = false;
    for (auto x = 0; x < nums1.size(); x++)
    {

        auto it = mp.find(nums1[x]);
        if (it != mp.end())
        {
            if (it->second == nums2.size() - 1)
            {
                res.push_back(-1);
                continue;
            }
            int j;
            for (j = it->second + 1; j < nums2.size(); j++)
            {
                if (nums2[j] > it->first)
                {
                    res.push_back(nums2[j]);
                    break;
                }
            }
            if (j == nums2.size())
            {

                res.push_back(-1);
            }
        }
    }
    for (auto x : res)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> nums1 = {2, 1, 3};
    vector<int> nums2 = {2, 3, 1};
    vector<int> res = nextGreaterElement(nums1, nums2);
    // for (auto x : res)
    // {
    //     cout << x << " ";
    // }

    return 0;
}