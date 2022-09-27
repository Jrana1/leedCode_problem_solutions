// problem link: https://leetcode.com/problems/length-of-last-word

#include <bits/stdc++.h>
using namespace std;
int lenOfLastWord(string str)
{

    int n = str.size() - 1;
    while (n >= 0 && !isalpha(str.at(n)))
    {
        n--;
    }
    int cnt = 0;
    while (n >= 0 && str.at(n) != ' ')
    {
        n--;
        cnt++;
    }
    cout << cnt << endl;
}
int main()
{

    string str = "a ";
    lenOfLastWord(str);

    return 0;
}