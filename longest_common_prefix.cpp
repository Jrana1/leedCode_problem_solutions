// problem link: https://leetcode.com/problems/longest-common-prefix

#include <bits/stdc++.h>
using namespace std;
string fun(vector<string> strs)
{
    string ans = "";
    int l1 = strs[0].size();
    int l2 = strs[1].size();
    int i = 0;
    while (i < l1 && i < l2 && strs[0].at(i) == strs[1].at(i))
    {
        ans += strs[0].at(i);
        i++;
    }
    if (ans == "")
    {
        return "";
    }
    l1 = strs.size();
    for (int i = 2; i < l1; i++)
    {
        int k = 0;
        while (ans[k] == strs[i].at(k))
        {
            k++;
        }
        if (k == 0)
        {
            return "";
        }
        else
        {
            ans.resize(k);
        }
    }
    return ans;
}
int main()
{

    vector<string> strs = {"dog", "racecar", "car"};
    cout << fun(strs) << endl;

    return 0;
}