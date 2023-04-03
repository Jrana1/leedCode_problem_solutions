#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string customSortString(string order, string s)
    {
        unordered_map<char, int> mp;
        int k = 0;
        int n = order.size();
        for (int i = 0; i < n; i++)
        {

            mp.insert({order.at(i), k++});
        }
        string tmp = "";

        for (int i = 0; i < s.size(); i++)
        {

            if (mp.find(s.at(i)) != mp.end())
            {
                tmp += s.at(i);
            }
        }
        sort(tmp.begin(), tmp.end(), [mp](char a, char b) -> bool
             {
                 auto ptr1 = mp.find(a);
                 auto ptr2 = mp.find(b);
                 if (ptr1 != mp.end() and ptr2 != mp.end())
                     return (ptr1->second < ptr2->second);
                     return true; });

        // int m = s.size();
        //  for (int i = 0; i < m; i++)
        //  {

        //     for (int j = 0; j < m - 1; j++)
        //     {

        //         auto ptr1 = mp.find(s.at(j));
        //         auto ptr2 = mp.find(s.at(j + 1));
        //         if (ptr1 != mp.end() and ptr2 != mp.end())
        //         {
        //             if (ptr1->second > ptr2->second)
        //             {

        //                 s[j] = ptr2->first;
        //                 s[j + 1] = ptr1->first;
        //             }
        //         }
        //     }
        // }
        for (int i = 0; i < s.size(); i++)
        {

            if (mp.find(s.at(i)) == mp.end())
            {
                tmp += s.at(i);
            }
        }
        cout << tmp << endl;
        return "jfj";
    }
};

int main()
{

    Solution s = Solution();
    s.customSortString("exv", "xwvee");

    return 0;
}