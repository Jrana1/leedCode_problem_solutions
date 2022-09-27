#include <bits/stdc++.h>
using namespace std;
void add_one(vector<int> &nums)
{

    int n = nums.size() - 1;
    int crr = 0;
    for (int i = n; i >= 0; i--)
    {
        if (i == n)
        {

            int tmp = nums[i] + 1;
            if (tmp < 10)
            {
                nums[i] = tmp;
            }
            else
            {
                nums[i] = 0;
                crr = 1;
            }
        }
        else
        {
            int tmp = nums[i] + crr;
            if (tmp < 10)
            {
                nums[i] = tmp;
                crr = 0;
            }
            else
            {
                nums[i] = 0;
                crr = 1;
            }
        }
    }
    if (crr == 1)
    {
        nums.insert(nums.begin(), 1);
    }
    cout << crr << endl;
    for (auto x : nums)
    {

        cout << x << " ";
    }
}
int main()
{

    vector<int> nums = {9};

    add_one(nums);

    return 0;
}