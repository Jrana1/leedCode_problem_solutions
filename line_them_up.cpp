#include <bits/stdc++.h>
using namespace std;

template <class T>
bool copmare(T a, T b)
{

    return a < b;
}
template <class T>

bool copmare1(T a, T b)
{

    return a > b;
}

bool checkOrder(vector<string> strs, bool (*comp)(string, string))
{

    for (int i = 0; i < strs.size() - 1; i++)
    {

        if (!comp(strs[i], strs[i + 1]))
        {
            return false;
        }
    }
    return true;
}

void solve()
{

    int n;
    vector<string> strs;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        strs.push_back(str);
    }

    if (checkOrder(strs, copmare))
    {
        cout << "INCREASING" << endl;
    }
    else if (checkOrder(strs, copmare1))
    {

        cout << "DECREASING" << endl;
    }
    else
    {
        cout << "NEITHER" << endl;
    }
}
int main()
{

    solve();

    return 0;
}