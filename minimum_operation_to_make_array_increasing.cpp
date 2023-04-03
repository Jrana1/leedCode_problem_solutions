#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int n = nums.size();
        int ops = 0;
        for (int i = 1; i < n; i++)
        {

            while (!(nums[i - 1] < nums[i]))
            {
                nums[i] += 1;
                ops++;
            }
        }
        cout << ops << endl;
        return ops;
    }
    int minOperationsOptm(vector<int> &nums)
    {
        int n = nums.size();
        int ops = 0;
        for (int i = 1; i < n; i++)
        {

            if (!(nums[i - 1] < nums[i]))
            {
                int inc = nums[i - 1] - nums[i] + 1;
                ops += inc;
                nums[i] += inc;
            }
        }
        cout << ops << endl;
        return ops;
    }
};

int main()
{

    Solution *s = new Solution();
    vector<int> vec = {1, 5, 2, 4, 1};
    s->minOperationsOptm(vec);

    return 0;
}