#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
    {

        vector<int> in(n + 1, 0);
        int m = edges.size();
        for (int i = 0; i < m; i++)
        {
            in[edges[i][1]]++;
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {

            if (in[i] == 0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};

int main()
{

    vector<vector<int>> edges = {
        {0, 1},
        {0, 2},
        {2, 5},
        {3, 4},
        {4, 2}};
    Solution s = Solution();
    s.findSmallestSetOfVertices(6, edges);

    return 0;
}