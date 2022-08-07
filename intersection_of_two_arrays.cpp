/// problem link: https://leetcode.com/problems/intersection-of-two-arrays-ii

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // using set and map DS
    vector<int> nums1 = {54, 93, 21, 73, 84, 60, 18, 62, 59, 89, 83, 89, 25, 39, 41, 55, 78, 27, 65, 82, 94, 61, 12, 38, 76, 5, 35, 6, 51, 48, 61, 0, 47, 60, 84, 9, 13, 28, 38, 21, 55, 37, 4, 67, 64, 86, 45, 33, 41};

    vector<int> nums2 = {17, 17, 87, 98, 18, 53, 2, 69, 74, 73, 20, 85, 59, 89, 84, 91, 84, 34, 44, 48, 20, 42, 68, 84, 8, 54, 66, 62, 69, 52, 67, 27, 87, 49, 92, 14, 92, 53, 22, 90, 60, 14, 8, 71, 0, 61, 94, 1, 22, 84, 10, 55, 55, 60, 98, 76, 27, 35, 84, 28, 4, 2, 9, 44, 86, 12, 17, 89, 35, 68, 17, 41, 21, 65, 59, 86, 42, 53, 0, 33, 80, 20};
    map<int, int> mp1;
    map<int, int> mp2;

    for (int i = 0; i < nums1.size(); i++)
    {
        mp1[nums1[i]]++;
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        mp2[nums2[i]]++;
    }
    vector<int> res;
    set<int> res1;
    for (int i = 0; i < nums1.size(); i++)
    {
        res1.insert(nums1[i]);
    }
    for (auto &i : res1)
    {
        auto tmp1 = mp1.find(i);
        auto tmp2 = mp2.find(i);
        if (tmp1 != mp1.end() && tmp2 != mp2.end())
        {
            int occ1 = tmp1->second;
            int occ2 = tmp2->second;
            if (occ1 == occ2)
            {
                while (occ1--)
                {
                    res.push_back(i);
                }
            }
            else
            {
                int cs = min(occ1, occ2);
                while (cs--)
                {
                    res.push_back(i);
                }
            }
        }
    }
    // for (auto i : res)
    // {
    //     cout << i << " ";
    // }
    cout << res.size() << endl;
    return 0;
}