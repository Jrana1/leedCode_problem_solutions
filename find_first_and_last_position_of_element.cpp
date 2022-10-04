#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> &v, int k)
{

    int st = 0;
    int end = v.size() - 1;

    while (st <= end)
    {

        int mid = (st + end) / 2;
        if (v[mid] == k)
        {
            return mid;
        }
        if (v[mid] > k)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return -1;
}

int main()
{

    vector<int> v = {5, 7, 7, 8, 8, 10};
    int k = 8;
    int idx = binary_search(v, k);
    int left = idx, right = idx;
    cout << idx << endl;
    while (left >= 0 && v[left] == k)
    {
        left--;
    }
    while (right < v.size() && v[right] == k)
    {
        right++;
    }
    cout << left + 1 << " " << right - 1 << endl;
    return 0;
}