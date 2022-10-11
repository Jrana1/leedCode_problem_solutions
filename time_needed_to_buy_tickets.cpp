// problem link : https://leetcode.com/problems/time-needed-to-buy-tickets

#include <bits/stdc++.h>
using namespace std;
int timeRequiredToBuy(vector<int> &tickets, int k)
{

    int n = tickets.size();
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        q.push(i);
    }
    int cnt = 0;
    while (!q.empty())
    {
        int front = q.front();
        q.pop();
        if (tickets[front] > 0)
        {
            tickets[front]--;
            q.push(front);
            cnt++;
        }

        if (front == k && tickets[front] == 0)
        {
            break;
        }
    }
    cout << cnt << endl;
}
int main()
{

    vector<int> tickets = {2, 3, 2};
    timeRequiredToBuy(tickets, 2);

    return 0;
}