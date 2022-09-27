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

    vector<int> v = {5, 7, 7, 8, 8, 10, 11, 11, 13, 15};
    int k = 13;
    int idx = binary_search(v, k);
    int left = idx, right = idx;
    while (1)
    {

        int flag = true;
        if (right < v.size() && v[right + 1] == k)
        {
            right++;
            flag = false;
        }
        if (left >= 0 && v[left - 1] == k)
        {
            left--;
            flag = false;
        }
        if (flag == true)
        {
            break;
        }
    }
    cout << left << " " << right << endl;
    return 0;
}