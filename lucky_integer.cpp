#include <bits/stdc++.h>
using namespace std;

int findLucky(vector<int> &arr)
{

    map<int, int> mp;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {

        mp[arr[i]]++;
    }
    // mp.reserve();
    for (auto it = mp.rbegin(); it != mp.rend(); it++)
    {

        // if (it->first == it->second)
        // {
        //     return it->first;
        // }
        cout << it->first << " " << it->second << endl;
    }

    return -1;
}
int main()
{

    vector<int> nums = {4, 3, 2, 2, 4, 1, 3, 4, 3};
    findLucky(nums);
    return 0;
}