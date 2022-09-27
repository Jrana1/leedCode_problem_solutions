// problem link: https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits

#include <bits/stdc++.h>
using namespace std;
int count(int x)
{
    int cnt = 0, y = 1;
    for (int i = 0; i < 32; i++)
    {
        if ((x & (y << i)) != 0)
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{

    vector<int> v = {4, 1, 3, 5};

    sort(v.begin(), v.end(), [](int a, int b) -> bool
         { return a > b; });
    // vector<pair<int, int>> mp;
    for (auto x : v)
    {
        cout << x << " ";
    }
    // // while sorting we have to change the logic if both a and b have
    // // the same numbers of 1 bits
    // sort(mp.begin(), mp.end(), [](auto a, auto b) -> bool
    //      {
    //       if(a.first==b.first){
    //           return  a.second<b.second;
    //       }
    //       return a.first<b.first; });
    // for (auto x = mp.begin(); x != mp.end(); x++)
    // {

    //     cout << x->first << " " << x->second << endl;
    // }

    return 0;
}