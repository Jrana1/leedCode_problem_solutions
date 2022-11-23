// problem link: https://leetcode.com/problems/isomorphic-strings/

#include <bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s, string t)
{

    vector<int> ht1(26 * 2, 0);
    vector<int> ht2(26 * 2, 0);
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        
        ht1[s[i] - 'a']++; 
        ht2[t[i] - 'a']++;
    }
    sort(ht1.begin(), ht1.end(), [](auto a, auto b) -> bool
         { return a > b; });
    sort(ht2.begin(), ht2.end(), [](auto a, auto b) -> bool
         { return a > b; });
    cout << (ht1 == ht2) << endl;
}

int main()
{

    string str1 = "foo";
    string str2 = "bar";
    isIsomorphic(str1, str2);

    return 0;
}