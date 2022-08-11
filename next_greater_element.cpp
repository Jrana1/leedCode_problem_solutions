// problem link: https://leetcode.com/problems/next-greater-element

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> res;
    for (int i = 0; i < nums1.size(); i++)
    {

        for (int j = 0; j < nums2.size(); j++)
        {

            if (nums1[i] == nums2[j] && j == nums2.size() - 1)
            {
                res.push_back(-1);
            }
            else if (nums1[i] == nums2[j] && nums2[j + 1] > nums2[j])
            {
                res.push_back(nums2[j + 1]);
            }
            else if (nums1[i] == nums2[j] && nums2[j + 1] < nums2[j])
            {
                res.push_back(-1);
            }
        }
    }
    return res;
}

int main()
{
    vector<int> nums1 = {1, 3, 5, 2, 4};
    vector<int> nums2 = {6, 5, 4, 3, 2, 1, 7};
    vector<int> res = nextGreaterElement(nums1, nums2);
    for (auto x : res)
    {
        cout << x << " ";
    }

    return 0;
}