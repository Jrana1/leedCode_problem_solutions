// problem link: https://leetcode.com/problems/remove-element

#include <bits/stdc++.h>
using namespace std;

// brute force solution in O(n^2) time

int removeElement(vector<int> &vec, int val)
{
    for (int i = 0; i < vec.size(); i++)
    {

        if (vec.at(i) == val)
        {
            for (int j = i; j < vec.size(); j++)
            {
                vec[j] = vec[j + 1];
            }
            vec.resize(vec.size() - 1);
            i--;
        }
    }
}

// better solution in O(N) time

int removeElement1(vector<int> &vec, int val)
{

    int j = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] != val)
        {
            vec[j++] = vec[i];
        }
    }
    return j;
}
// problem link : https://leetcode.com/problems/remove-duplicates-from-sorted-array
int remove_element(vector<int> &nums)
{
    int j = 0;
    for (int i = 0; i < nums.size() - 1; i++)
    {

        if (nums[i] != nums[i + 1])
        {
            nums[j++] = nums[i];
        }
    }
    nums[j] = nums[nums.size() - 1];
    // j++;
    return j;
}
int main()
{

    vector<int> vec = {1, 1, 2};
    int index = remove_element(vec);
    for (auto x = 0; x <= index; x++)
    {
        cout << vec[x] << " ";
    }

    return 0;
}