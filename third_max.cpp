// problem link: https://leetcode.com/problems/third-maximum-number/submissions/

#include <bits/stdc++.h>

using namespace std;
// sol in O(nlogn) time and O(n) space complexity
int thirdMax(vector<int> &nums)
{

    set<int> st;
    for_each(nums.begin(), nums.end(), [nums, &st](int x)
             { st.insert(x); });
    // Case 1: if the list dosnt have any third element. then return max element
    if (st.size() <= 2)
    {
        // cout << "fjo" << endl;
        return *(st.rbegin());
    }
    else
    {
        // Case 2: if the list has more or equal to 3 element then return 3rd element from end of set st
        auto it = st.rbegin();
        int cnt = 0;
        for (; it != st.rend(); it++)
        {

            if (cnt == 2)
            {
                break;
            }
            // cout << *it << endl;
            cnt++;
        }
        // cout << "fjlao" << endl;
        return *it;
    }
}
int main()
{

    vector<int> nums = {1, 2};
    cout << thirdMax(nums) << endl;
    return 0;
}