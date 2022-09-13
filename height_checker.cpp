// problem link: https://leetcode.com/problems/height-checker/
#include <bits/stdc++.h>
using namespace std;
int fun(vector<int> &v)
{
    vector<int> tmp;
    tmp = v;
    sort(tmp.begin(), tmp.end());
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] != tmp[i])
        {
            cnt++;
        }
    }

    return cnt;
}
int main()
{

    vector<int> v = {2, 1, 2, 1, 1, 2, 2, 1};

    cout << fun(v) << endl;

    return 0;
}