#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        int n = nums.size();
        int *leftSum = new int[n];
        int *rightSum = new int[n];

        int st = 1, end = n - 2;
        while (st < n)
        {
            leftSum[st] = nums[st - 1] + leftSum[st - 1];
            st++;
            rightSum[end] = nums[end + 1] + rightSum[end + 1];
            end--;
        }
        for (int i = 0; i < n; i++)
            nums[i] = abs(leftSum[i] - rightSum[i]);
        }
};

int main()
{
    vector<int> vec = {10, 4, 8, 3};
    Solution s = Solution();
    s.leftRightDifference(vec);

    return 0;
}