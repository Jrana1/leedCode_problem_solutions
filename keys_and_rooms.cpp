#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {

        vector<bool> visited(rooms.size(), false);
        dfs(rooms, visited, 0);
        for (auto x : visited)
        {

            cout << x << " ";
        }
    }

private:
    void bfs(vector<vector<int>> &rooms, vector<bool> &visited, int sc)
    {
        queue<int> q;
        q.push(sc);
        visited[sc] = true;

        while (!q.empty())
        {

            sc = q.front();
            q.pop();
            for (auto key : rooms[sc])
            {

                if (visited[key] == false)
                {
                    visited[key] = true;
                    q.push(key);
                }
            }
        }
    }
    void dfs(vector<vector<int>> &rooms, vector<bool> &visited, int sc)
    {

        visited[sc] = true;

        for (auto key : rooms[sc])
        {

            if (visited[key] == false)
            {

                dfs(rooms, visited, key);
            }
        }
    }
};

int main()
{

    vector<vector<int>> gr = {{1, 3}, {3, 0, 1}, {2}, {0}};

    Solution s;
    s.canVisitAllRooms(gr);

    return 0;
}