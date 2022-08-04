// problem link: https://leetcode.com/problems/jewels-and-stones

#include <bits/stdc++.h>
using namespace std;
/// brute force solution in O(n^2) time

int numJewelsInStones(string jewel, string stones)
{
    int cnt = 0;
    for (int i = 0; i < jewel.size(); i++)
    {
        for (int j = 0; j < stones.size(); j++)
        {
            if (jewel[i] == stones[j])
            {
                cnt++;
            }
        }
    }
    return cnt;
}

// using binary search in  O(nlogn) time

int numJewelsInStones1(string jewels, string stones)
{

    sort(jewels.begin(), jewels.end());
    int cnt = 0;
    for (int i = 0; i < stones.size(); i++)
    {
        if (binary_search(jewels.begin(), jewels.end(), stones[i]))
        {
            cnt++;
        }
    }
    return cnt;
}

// using hashing

int numJewelsInStones2(string jewels, string stones)
{

    map<char, int> mp;
    for (int i = 0; i < stones.size(); i++)
    {
        mp[stones[i]]++;
    }
    int cnt = 0;
    for (int i = 0; i < jewels.size(); i++)
    {

        if (mp.find(jewels[i]) != mp.end())
        {
            cnt += mp.find(jewels[i])->second;
        }
    }
    return cnt;
}

int main()
{
    string jewel = "aA";
    string stones = "aAAbbb";

    cout << numJewelsInStones2(jewel, stones) << endl;

    return 0;
}