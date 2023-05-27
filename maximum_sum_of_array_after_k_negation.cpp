#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int largestSumAfterKNegations(vector<int> &nums, int k)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            pq.push(nums[i]);
        }
        while (k--)
        {

            int top = pq.top();
            pq.pop();
            pq.push(-1 * top);
        }

        int sum = 0;
        while (!pq.empty())
        {
            sum += pq.top();
            pq.pop();
        }
        cout << sum << endl;
        return 2;
    }
};
int main()
{

    vector<int> vec = {3, -1, 0, 2};
    Solution s = Solution();
    s.largestSumAfterKNegations(vec, 3);

    return 0;
}