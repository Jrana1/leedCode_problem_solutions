// problem link: https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room
#include <bits/stdc++.h>
using namespace std;
int maxMeeting(vector<int> start, vector<int> end)
{
    int n = start.size();
    vector<pair<int, int>> times;

    for (int i = 0; i < n; i++)
    {

        pair<int, int> p = make_pair(start[i], end[i]);
        times.push_back(p);
    }
    sort(times.begin(), times.end(), [](pair<int, int> a, pair<int, int> b) -> bool
         { return a.second < b.second; });
    pair<int, int> first = times[0];
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (times[i].first > first.second)
        {
            cnt++;
            first = times[i];
        }
    }
    cout << cnt << endl;
}

int main()
{

    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end = {2, 4, 6, 7, 9, 9};

    maxMeeting(start, end);
    return 0;
}