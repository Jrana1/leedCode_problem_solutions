#include <bits/stdc++.h>
using namespace std;

string convert(int n, int base)
{

    string ans;
    while (n > 0)
    {

        ans += to_string(n % base);
        n /= base;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
bool isPalindrome(string s)
{

    int l = 0;
    int r = s.size() - 1;

    while (l <= r)
    {

        if (s[l] != s[r])
        {
            return false;
        }
        l++, r--;
    }
    return true;
}
int main()
{

    cout << isPalindrome(convert(9, 3)) << endl;

    return 0;
}