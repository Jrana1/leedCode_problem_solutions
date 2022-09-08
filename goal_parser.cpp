// problem link: https://leetcode.com/problems/goal-parser-interpretation/

#include <bits/stdc++.h>
using namespace std;
string interpret(string command)
{

    string ans = "";
    int i = 0;
    while (i < command.size())
    {
        // cout << command.at(i) << endl;
        if (command.at(i) == 'G')
        {

            ans += 'G';
            i++;
        }
        else if (command.at(i) == '(' && command.at(i + 1) == ')')
        {
            ans += 'o';
            i = i + 2;
        }
        else if (command.at(i) == '(' && command.at(i + 1) == 'a')
        {
            ans += "al";
            i = i + 4;
        }
    }
    return ans;
}
int main()
{

    string command = "G()(al)";
    cout << interpret(command) << endl;
    return 0;
}