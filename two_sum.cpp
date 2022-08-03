/// problem link: https://leetcode.com/problems/two-sum

#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
// brute force approach in O(n^2) time

/*
   algo(array,target,res_array)
      for i=0 to array.size() do
          for j=i+1 to array.size() do
                if((array[i]+arra<[j])==target)
                    res_array.push_back(i);
                    res_array.push_back(j);
       return res_array
*/

// implementation in c++

vector<int> two_sum(vector<int> &nums, int target)
{

    vector<int> res;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                res.push_back(i);
                res.push_back(j);
            }
        }
    }
    return res;
}

// Another better solution in O(N*logN) time

/*

Algorithm:
      step 1: sort the array
      step 2: set two pointer st=0 and end = array.size() - 1
      step 3: in each iteration check if the sum of first and last element= target then one matching found.
            othrwise, if the sum greater then target decrease end pointer
                      if the sum lesser then target then increase the st pointer
*/

// implementation in C++

vector<int> Two_sum(vector<int> &nums, int target)
{
    vector<int> res;
    int st = 0;
    int end = nums.size() - 1;
    while (st < end)
    {

        if ((nums[st] + nums[end]) == target)
        {
            res.push_back(st);
            res.push_back(end);
            st++, end--;
        }
        else if ((nums[st] + nums[end]) > target)
        {
            end--;
        }
        else
        {
            st++;
        }
    }
    return res;
}

int main()
{

    vector<int> nums = {3, 2, 4};
    // int n = nums.size();
    sort(nums.begin(), nums.end());
    vector<int> res = Two_sum(nums, 6);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}