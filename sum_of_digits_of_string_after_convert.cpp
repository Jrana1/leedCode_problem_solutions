// https://leetcode.com/problems/sum-of-digits-of-string-after-convert/description
#include <bits/stdc++.h>
using namespace std;
int getLucky(string s, int k)
{
    string integer;
    for (int i = 0; i < s.size(); i++)
    {

        integer += to_string(s.at(i) - 'a' + 1);
    }
   
    while (k--)
    {
        int num = 0;
        for (int i = 0; i < integer.size(); i++)
        {
            num += (integer.at(i) - '0');
        }
        integer = to_string(num);
    }
    cout << integer << endl;
}
int main()
{

    getLucky("iiii", 1);

    return 0;
}