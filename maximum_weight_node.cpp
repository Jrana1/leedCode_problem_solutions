#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> graph = {1};

    unordered_map<int, int> mp;

    for (int i = 0; i < graph.size(); i++)
    {
        if (graph[i] < 0)
        {
            continue;
        }
        if (mp.find(graph[i]) == mp.end())
        {

            mp.insert({graph[i], i});
        }
        else
        {

            auto it = mp.find(graph[i]);
            it->second += i;
        }
    }
    int ans = mp.begin()->first;
    int mx = mp.begin()->second;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {

        if (it->second > mx)
        {
            mx = it->second;
            ans = it->first;
        }

        else if (it->second == mx)
        {
            ans = max(ans, it->first);
        }
    }
    cout << ans << endl;

    return 0;
}