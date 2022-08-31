// problem link: https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/submissions/

#include <bits/stdc++.h>
using namespace std;
double average(vector<int> &salary)
{

    double mx = salary[0];
    double mn = salary[0];

    for (auto x : salary)
    {

        // mx = max(mx,x);
        if (x > mx)
        {
            mx = x;
        }
        if (x < mn)
        {
            mn = x;
        }
        // mn = min(mn,x);
    }
    double sum = 0;
    for (auto x : salary)
    {

        if (x == mx || x == mn)
        {
            continue;
        }
        sum += x;
    }
    return sum / (salary.size() - 2);
}
int main()
{

    return 0;
}