#include <bits/stdc++.h>
using namespace std;
bool isPermutation(string s1, string s2)
{

    vector<int> h1(26);
    vector<int> h2(26);
    int len1 = s1.size();
    int len2 = s2.size();
    if (len2 < len1)
        return false;
    int i = 0;
    while (i < len1)
    {

        h1[s1[i] - 'a']++;
        h2[s2[i] - 'a']++;
        i++;
    }
    int st = 0, end = i - 1;

    while (end < len2)
    {

        if (h1 == h2)
        {
            return true;
        }
        h2[s2[st] - 'a']--;
        end++;
        h2[s2[end] - 'a']++;
        st++;
        // end++;
    }
    return false;
}
int main()
{
    string s1 = "ab";
    string s2 = "eidbeaoo";
    cout << isPermutation(s1, s2) << endl;
    return 0;
}