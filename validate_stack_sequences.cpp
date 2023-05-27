#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        int n = pushed.size();
        int m = popped.size();
        if (n == 0)
            return true;
        stack<int> st;
        int popIdx = 0;
        int pushIdx = 0;
        while (popIdx < m and pushIdx < n)
        {

            st.push(pushed[pushIdx++]);
            while (!st.empty() and st.top() == popped[popIdx])
            {
                st.pop();
                popIdx++;
            }
        }

        return st.size() == 0;
    }
};

int main()
{

    vector<int> pushed = {1, 2, 3, 4, 5};
    vector<int> popped = {4, 3, 5, 1, 2};

    Solution *s = new Solution();
    cout << s->validateStackSequences(pushed, popped) << endl;

    return 0;
}