// problem link: https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/

#include <bits/stdc++.h>
using namespace std;

string freqAlphabets(string s)
{

    string ans;
    int i = s.size() - 1;
    while (i >= 0)
    {

        if (s.at(i) == '#')
        {

            ans += 'a' + stoi(s.substr(i - 2, 2)) - 1;
            i = i - 3;
        }
        else
        {
            ans += 'a' + s.at(i) - '0' - 1;
            i--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{

    string s = "1326#";
    cout << freqAlphabets(s) << endl;

    return 0;
}