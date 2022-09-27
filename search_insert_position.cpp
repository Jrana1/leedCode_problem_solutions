// problem link: https://leetcode.com/problems/search-insert-position/

#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &vec, int k)
{

    int st = 0;
    int end = vec.size() - 1;
    int mid;
    while (st <= end)
    {

        mid = (st + end) / 2;
        if (vec.at(mid) == k)
        {
            return mid;
        }
        else if (k < vec.at(mid))
        {
            end = mid - 1;
        }
        else if (k > vec.at(mid))
        {
            st = mid + 1;
        }
    }
    cout << mid << " " << end << " " << st << endl;
    if (k > vec.at(mid))
    {
        if (mid == vec.size() - 1)
        {
            return mid + 1;
        }
        while (mid < vec.size() && k > vec.at(mid))
        {
            mid++;
        }
        return mid;
    }
    else
    {
        if (mid == 0)
            return mid;
        while (mid >= 0 && k < vec.at(mid))
        {
            mid--;
        }
        return mid + 1;
    }
}

int main()
{
    double b = log10(43) / log10(3);
    float ans = b - (int)(b);
    cout << ans << " " << b << endl;

    return 0;
}