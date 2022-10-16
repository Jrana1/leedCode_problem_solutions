// prblem link: https://leetcode.com/problems/sorting-the-sentence

#include <bits/stdc++.h>
using namespace std;
string sortSentence(string s)
{

    map<int, string> mp;
    int n = s.size();
    string tmp;
    bool isSpace = false;
    for (int i = 0; i < n; i++)
    {

        if (s[i] != ' ')
        {
            tmp += s[i];
        }
        else
        {
            mp.insert({tmp[tmp.size() - 1] - '0', tmp});
            tmp = "";
        }
        if (i == n - 1)
        {
            mp.insert({tmp[tmp.size() - 1] - '0', tmp});
        }
    }
    s = "";
    for (auto it : mp)
    {
        it.second.resize(it.second.size() - 1);
        s += it.second + " ";
    }
    s.resize(s.size() - 1);
    cout << s << endl;
}
int main()
{
    string s = "Myself2 Me1 I4 and3";

    sortSentence(s);

    return 0;
}