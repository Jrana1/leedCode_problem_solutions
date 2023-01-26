#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumRounds(vector<int> &tasks)
    {

        vector<int> freq(100000000, 0);
        cout << "hfla" << endl;
        for (int i = 0; i < 10; i++)
        {

            cout << freq[i] << endl;
        }
    }
};

int main()
{
    Solution s;
    vector<int> freq = {2, 2, 3, 3, 2, 4, 4, 4, 4, 4};
    s.minimumRounds(freq);

    return 0;
}