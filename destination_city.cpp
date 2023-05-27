#include <bits/stdc++.h>
using namespace std;
// unordered_map<long, long> pf(int n)
// {

//     unordered_map<long, long> mp;
//     for (int i = 2; i <= pow(n, 10 / 9) + 1; i++)
//     {
//         if (n % i == 0)
//         {
//             int e = 0;
//             while (n % i == 0)
//             {
//                 n /= i;
//                 e++;
//             }
//             mp.insert({i, e});
//         }
//     }
//     if (n > 1)
//         mp.insert({n, 1});
//     return mp;
// }
int main()
{
    // string str = "";
    // getline(cin, str);
    // int c = stoi(str);
    long c;
    cin >> c;
    while (c--)
    {

        // getline(cin, str);
        long n;
        cin >> n;
        long k = 1;
        long sum = (k * (k + 1)) / 2;
        bool found = false;
        while ((n - sum) > 0 and (n - sum) % (k + 1) != 0)
        {

            k++;
            sum = (k * (k + 1)) / 2;
        }
        if ((n - sum) >= 0 and (n - sum) % (k + 1) == 0)
        {
            int a = (n - sum) / (k + 1);
            cout << n << " = " << a;
            for (int i = 1; i <= k; i++)
            {
                cout << " + " << a + i;
            }
            cout << endl;
        }
        else
        {
            cout << "IMPOSSIBLE" << endl;
        }
    }

    return 0;
}