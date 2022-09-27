// problem link: https://leetcode.com/problems/next-greater-element

#include <bits/stdc++.h>
using namespace std;
/// brute force approaches--> O(N^2) time complexity and O(N) space complexity
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
// better approache using Stack time complexity O(N)
vector<int> myFun(vector<int> &nums)
{

    stack<int> st;
    vector<int> res(nums.size());
    st.push(0);

    for (int i = 1; i < nums.size(); i++)
    {

        if (!st.empty() && nums[i] <= nums[st.top()])
        {

            st.push(i);
        }
        else
        {

            while (!st.empty() && nums[i] > nums[st.top()])
            {

                res[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
        }
    }
    // while (!st.empty())
    // {

    //     res[st.top()] = -1;
    //     st.pop();
    // }
    int n = st.size();
    for (int i = 0; i < n - 1; i++)
    {

        int first_top = st.top();
        st.pop();
        int second_top = st.top();
        res[first_top] = nums[second_top];
    }

    for (auto x : res)
    {
        cout << x << " ";
    }
}

int main()
{
    vector<int> nums1 = {5, 4, 3, 2, 1, 3};
    vector<int> nums2 = {2, 3, 1};
    // vector<int> res = nextGreaterElement(nums1, nums2);
    myFun(nums1);
    // for (auto x : res)
    // {
    //     cout << x << " ";
    // }

    return 0;
}