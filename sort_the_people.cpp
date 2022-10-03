/// problem link: https://leetcode.com/problems/sort-the-people
#include <bits/stdc++.h>
using namespace std;
vector<string> sortPeople(vector<string> &names, vector<int> &heights)
{
    map<int, int, greater<int>> mp;
    int n = heights.size();
    for (int i = 0; i < n; i++)
    {
        mp.insert({heights[i], i});
    }
    vector<string> ans;
    for (auto it : mp)
    {
        ans.push_back(names[it.second]);
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
}
int main()
{
    vector<string> names = {"Alice", "Bob", "Bob"};
    vector<int> heights = {155, 185, 150};
    sortPeople(names, heights);

    return 0;
}