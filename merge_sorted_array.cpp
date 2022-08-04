
// problem link: https://leetcode.com/problems/merge-sorted-array

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int k = 0;
    for (int i = m; i < (m + n); i++)
    {
        nums1[i] = nums2[k++];
    }

    sort(nums1.begin(), nums1.end());
}

int main()
{

    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {1, 5, 9};
    merge(nums1, 3, nums2, 3);
    for (int i = 0; i < 6; i++)
    {
        cout << nums1[i] << " ";
    }

    return 0;
}