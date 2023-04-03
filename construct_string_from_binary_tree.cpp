#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int val) : val(val), right(NULL), left(NULL) {}
};

class Solution
{
public:
    void tree2str(TreeNode *root)
    {
        if (root == NULL)
        {

            return;
        }
        if (root->left == NULL and root->right == NULL)
        {
            cout << "(" << root->val << ")";
        }
        else
        {
            cout << root->val << "(";
        }
        tree2str(root->left);
        tree2str(root->right);
    }
    void fun(int n)
    {

        bitset<32> binary(n);
        string str = binary.to_string();
        int evenCnt = 0;
        int oddCnt = 0;
        for (int i = str.size() - 1; i >= 0; i--)
        {
            if (str[i] == '1')
            {
                i % 2 == 1 ? evenCnt++ : oddCnt++;
            }
        }
        cout << evenCnt << " " << oddCnt << endl;
    }
    void fun2(int n)
    {
        int evenCnt = 0;
        int oddCnt = 0;
        for (int i = 0; i < 32; i++)
        {
            if ((n & (1 << i)) != 0)
            {
                i % 2 == 0 ? evenCnt++ : oddCnt++;
            }
        }
        cout << evenCnt << " " << oddCnt << endl;
    }
};

int main()
{
    // TreeNode *root = new TreeNode(1);
    // root->left = new TreeNode(2);
    // root->right = new TreeNode(3);
    // root->left->left = new TreeNode(4);
    Solution s = Solution();
    s.fun2(17);
    // s.tree2str(root);
    // cout << endl;
    return 0;
}