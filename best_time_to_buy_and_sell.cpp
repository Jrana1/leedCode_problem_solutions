/// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

#include <bits/stdc++.h>
using namespace std;
bool big(int a, int b)
{
    if (a > b)
        return true;
    return false;
}
bool small(int a, int b)
{
    if (a < b)
        return true;
    return false;
}

int find_index(vector<int> &nums, bool (*cmp_func)(int, int), int st)
{
    int tmp = nums[st];
    int index = st;
    for (int i = st + 1; i < nums.size(); i++)
    {
        if (cmp_func(nums[i], tmp))
        {
            index = i;
            tmp = nums[i];
        }
    }
    return index;
}
// brute force solution in O(n^2) time
int best_time_to_buy_and_sell(vector<int> &vec)
{
    int max_prof = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            max_prof = max(max_prof, vec[j] - vec[i]);
        }
    }
    return max_prof;
}

// better approach using mapping technnique O(N) time and O(N) space complexitiy

int best_time_to_buy_and_sell1(vector<int> &v)
{

    list<int> aux;
    int max_prof = v[v.size() - 1];
    for (int i = v.size() - 1; i >= 0; i--)
    {
        max_prof = max(max_prof, v[i]);
        aux.push_front(max_prof);
    }
    max_prof = 0;
    auto it = aux.begin();
    for (int i = 0; i < v.size(); i++)
    {
        max_prof = max(max_prof, *it - v[i]);
        it++;
    }
    return max_prof;
}

// best approach without extra space

int best_time_to_buy_and_sell2(vector<int> &v)
{

    int min_buy = v[0];
    int max_prof = 0;
    for (int i = 0; i < v.size(); i++)
    {
        min_buy = min(min_buy, v[i]);
        max_prof = max(max_prof, v[i] - min_buy);
    }
    return max_prof;
}

int main()
{
    vector<int> vec = {2, 4, 1};

    cout << best_time_to_buy_and_sell2(vec);

    return 0;
}