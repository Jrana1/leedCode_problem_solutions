// problem link: https://leetcode.com/problems/last-stone-weight/

#include <bits/stdc++.h>
using namespace std;
int lastStoneWeight(vector<int> &stones)
{

    priority_queue<int, vector<int>> pq;
    for (auto x : stones)
    {
        pq.push(x);
    }

    while (!pq.empty())
    {
        if (pq.size() == 1)
        {
            return pq.top();
        }
        int y = pq.top();
        pq.pop();
        int x = pq.top();
        pq.pop();
        if (x != y)
        {
            pq.push(y - x);
        }
    }
    return 0;
}
int main()
{

    vector<int> v = {1};
    cout << lastStoneWeight(v) << endl;

    return 0;
}