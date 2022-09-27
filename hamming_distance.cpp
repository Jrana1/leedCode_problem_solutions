// problem link: https://leetcode.com/problems/hamming-distance/

#include <bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y)
{
    int cnt = 0;
    int mask = 1;
    for (int i = 0; i < 32; i++)
    {

        if (((x) & (mask << i)) != ((y) & (mask << i)))
        {
            cnt++;
        }
    }
    return cnt;
}
int main()
{

    cout << hammingDistance(7, 0) << endl;

    return 0;
}