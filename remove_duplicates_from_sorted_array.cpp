#include <bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int> &nums)
{

    int n = nums.size();
    int cnt = 0;
    int j = 0;
    for (int i = 0; i < n;)
    {

        if (i + 1 < n && nums[i] == nums[i + 1])
        {
            nums[j] = nums[i];
            nums[j + 1] = nums[i + 1];
            j += 2;
            i++;

            while (i + 1 < n && nums[i] == nums[i + 1])
            {
                i++;
            }
            i++;
        }
        else
        {
            nums[j] = nums[i];
            j++, i++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        cout << nums[i] << " ";
    }
}
int main()
{

    vector<int> nums = {1};
    removeDuplicates(nums);
    return 0;
}