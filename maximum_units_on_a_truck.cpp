#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(
            boxTypes.begin(), boxTypes.end(),
            [](auto a, auto b) -> bool
            { return b[1] < a[1]; });

        int i = 0;
        int ans = 0;
        while (truckSize > 0)
        {
            if (truckSize > boxTypes[i][0])
            {
                ans += boxTypes[i][0] * boxTypes[i][1];
            }
            else
            {
                ans += boxTypes[i][1] * truckSize;
            }
            truckSize -= boxTypes[i][0];
            i++;
        }
        cout << ans << endl;
        return 3;
    }
};
int main()
{
    vector<vector<int>> vecs = {
        {1, 3},
        {2, 2},
        {3, 1}

    };

    Solution s = Solution();
    s.maximumUnits(vecs, 4);
    return 0;
}