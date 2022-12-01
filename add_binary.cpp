#include <bits/stdc++.h>
using namespace std;
// make both binary number of equal len
void make_equal(string &s, int len)
{

    for (int i = s.size(); i < len; i++)
    {
        s += '0';
    }
}
string addBinary(string a, string b)
{

    int len1 = a.size();
    int len2 = b.size();
    // if len of a is smaller than b. increase len of a. otherwise increase len of b
    if (len1 < len2)
    {
        reverse(a.begin(), a.end());
        make_equal(a, len2);
        reverse(a.begin(), a.end());
    }
    else
    {
        reverse(b.begin(), b.end());
        make_equal(b, len1);
        reverse(b.begin(), b.end());
    }
    int carry = 0;
    string ans;
    for (int i = a.size() - 1; i >= 0; i--)
    { // sum = x1+y1+carry  -> x1 LSB of a ans y1 LSB of a,
        int sum = carry + (a.at(i) - '0') + (b.at(i) - '0');
        if (sum % 2 == 0)
        {
            ans += '0';
        }
        else
        {
            ans += '1';
        }

        cout << sum << " " << carry << " " << ans << endl;
        carry = sum > 1 ? 1 : 0;
    }
    // if there is any carry at the end add it to the beginning
    // cout << ans << endl;
    reverse(ans.begin(), ans.end());
    if (carry == 1)
    {
        ans.insert(ans.begin(), '1');
    }
    cout << ans << endl;
}
int main()
{

    // string a = "1010";
    // string b = "1011";
    // // addBi
    cout << "hello" << endl;

    return 0;
}