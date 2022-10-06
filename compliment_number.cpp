// problem link: https://leetcode.com/problems/number-complement
#include <bits/stdc++.h>
using namespace std;
int findComplement(int num)
{
    int mask = 1;
    int tmp = num;
    for (int i = 0; i < 31; i++)
    {
        if ((mask << i) > tmp)
        {
            break;
        }

        if ((num & (mask << i)) == 0)
        {
            num = num | (mask << i);
        }
        else
        {
            num = num ^ (mask << i);
        }
        cout << i << " " << num << endl;
    }
}
int main()
{

    int a = 2147483646;
    ;
    findComplement(a);

    return 0;
}