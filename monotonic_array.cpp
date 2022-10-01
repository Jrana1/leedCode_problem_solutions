// problem link : https://leetcode.com/problems/monotonic-array
#include <bits/stdc++.h>
using namespace std;
bool isMonotonic(vector<int> &vc)
{

    bool increasing = true;
    bool decreasing = true;
    int n = vc.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (vc[i] > vc[i + 1])
        {
            increasing = false;
        }
        if (vc[i] < vc[i + 1])
        {
            decreasing = false;
        }
    }
    return increasing || decreasing;
}
int main()
{

    return 0;
}