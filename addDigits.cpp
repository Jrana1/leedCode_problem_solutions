// problem link : https://leetcode.com/problems/add-digits

#include <bits/stdc++.h>
using namespace std;

int addDigits(int num)
{

    while (1)
    {

        int digits_sum = 0;
        string num_str = to_string(num);
        for (int i = 0; i < num_str.size(); i++)
        {
            digits_sum += num_str[i] - '0';
        }
        if (to_string(digits_sum).size() == 1)
        {
            return digits_sum;
        }
        else
        {
            num = digits_sum;
        }
    }
}

int main()
{

    int num;
    cin >> num;
    cout << addDigits(num) << endl;
    return 0;
}