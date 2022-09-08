// problem link: https://leetcode.com/problems/can-make-arithmetic-progression

#include <bits/stdc++.h>
using namespace std;
bool canMakeArithmeticProgression(vector<int> &arr)
{

    sort(arr.begin(), arr.end());

    int dif = arr[0] - arr[1];
    for (int i = 1; i < arr.size() - 1; i++)
    {

        if (arr[i] - arr[i + 1] != dif)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    vector<int> v = {3, 5, 1};
    cout << canMakeArithmeticProgression(v) << endl;

    return 0;
}