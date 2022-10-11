// https://leetcode.com/problems/find-the-winner-of-the-circular-game
#include <bits/stdc++.h>
using namespace std;
int findTheWinner(int n, int k)
{

    queue<int> q;
    for (int i = 1; i <= n; i++)
    {

        q.push(i);
    }
    while (!q.empty())
    {
        if (q.size() == 1)
        {
            break;
        }
        if (q.size() < k)
        {
            k = q.size() % k;
        }
        for (int i = 1; i <= k; i++)
        {
            int front = q.front();
            q.pop();
            if (i != k)
            {
                q.push(front);
            }
        }
    }
    cout << q.front() << endl;
}
int main()
{

    findTheWinner(6, 5);

    return 0;
}