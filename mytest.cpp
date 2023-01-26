#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        set<int> list1;
        vector<int> list2;
        vector<int> list3;
        for (int i = 0; i < 2 * n; i++)
        {

            int x;
            cin >> x;
            if (i < n)
            {
                list1.insert(x);
                list3.push_back(x);
            }
            else
            {

                list2.push_back(x);
            }
        }
        sort(list2.begin(), list2.end());
        unordered_map<int, int> mp;
        int i = 0;
        for (auto it = list1.begin(); it != list1.end(); it++)
        {

            mp.insert({*it, i});
            i++;
        }

        for (int x = 0; x < n; x++)
        {
            cout << list2[mp.find(list3[x])->second] << endl;
        }
        cout << endl;
    }
    return 0;
}