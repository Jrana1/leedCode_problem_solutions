#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    long long maxKelements(vector<int> &nums, int k)
    {

        priority_queue<int> pq;

        for (auto x : nums)
        {
            pq.push(x);
        }
        long long sum = 0;
        for (int i = 0; i < k; i++)
        {
            int top = pq.top();
            // cout << top << endl;
            sum += top;
            pq.pop();
            (top % 3) == 0 ? pq.push(top / 3) : pq.push((top / 3) + 1);
            // pq.push(top / 3);
        }
        cout << sum << endl;
        // while (!pq.empty())
        // {

        //     cout << pq.top() << endl;
        //     pq.pop();
        // }

        return 10;
    }
};
int main()
{

    Solution s = Solution();
    vector<int> vec = {1, 10, 3, 3, 3};
    s.maxKelements(vec, 3);

    return 0;
}