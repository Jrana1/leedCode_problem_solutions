// problem link: https://leetcode.com/problems/calculate-digit-sum-of-a-string

#include <bits/stdc++.h>
using namespace std;

string find_sum(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    return to_string(sum);
}

string digitSum(string str, int k)
{
    if (str.size() <= k)
        return str;

    while (1)
    {

        string newStr = "";
        while (str != "")
        {

            string tmp;
            if (str.size() > k)
            {
                tmp = str.substr(0, k);
                str.erase(0, k);
                newStr += find_sum(tmp);
                // cout << tmp << " " << str << endl;
            }
            else
            {
                tmp = str;
                str.clear();
                newStr += find_sum(tmp);
                // cout << "hf" << endl;
            }
            //  cout << newStr << endl;
        }
        if (newStr.size() <= k)
        {
            return newStr;
        }
        else
        {
            str = newStr;
        }
    }

    return "no";
}

int main()
{

    string str = "00000000";
    int k = 3;

    cout << digitSum(str, k) << endl;

    return 0;
}