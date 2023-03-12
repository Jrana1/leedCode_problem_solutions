#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProduct(vector<string> &words)
    {
        int n = words.size();
        int *tmp = new int[n];
        for (int i = 0; i < n; i++)
        {
            int x = 0;
            int m = words[i].size();
            for (int j = 0; j < m; j++)
            {
                x |= (1 << (words[i][j] - 'a'));
            }
            tmp[i] = x;
        }
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((tmp[i] & tmp[j]) == 0)
                {
                    int prod = words[i].size() * words[j].size();
                    mx = max(prod, mx);
                }
            }
        }
        cout << mx << endl;
        return 3;
    }
    int integerReplacement(int n)
    {

        int tmp = n;
        int cnt1 = 0;
        while (n != 1)
        {

            cnt1++;
            if (n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                n += 1;
            }
            cout << n << " ";
        }
        cout << cnt1 << endl;
        int cnt2 = 0;
        while (tmp != 1)
        {

            cnt2++;
            if (tmp % 2 == 0)
            {
                tmp /= 2;
            }
            else
            {
                tmp -= 1;
            }
            cout << tmp << " ";
        }
        cout << cnt2 << endl;
        return min(cnt1, cnt2);
    }

    int integerReplacement2(int n)
    {
        int count = 0;
        while (n > 1)
        {
            if (n == 2147483647)
                return 32;
            if (n == 3)
                return count + 2;
            if (n % 2 == 0)
                n = n / 2;
            else
            {
                if (((n + 1) / 2) % 2 == 0)
                    n++;
                else
                    n--;
            }
            cout << n << " ";
            count++;
        }
        return count;
    }
};

int main()
{
    Solution s = Solution();
    vector<string> words = {"a", "aa", "aaa", "aaaa"};

    cout << s.integerReplacement2(6) << endl;
    cout << s.integerReplacement(6) << endl;

    return 0;
}