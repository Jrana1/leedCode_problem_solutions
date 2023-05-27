#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int val) : val(val), left(NULL), right(NULL) {}
};
class Solution
{
public:
    int maxLevelSum(TreeNode *root)
    {

        queue<TreeNode *> qu;
        qu.push(root);

        int ans = 0;
        int mx = INT_MIN;
        int level = 0;
        while (!qu.empty())
        {

            int n = qu.size();
            int sum = 0;
            level++;
            for (int i = 0; i < n; i++)
            {

                root = qu.front();
                qu.pop();
                sum += root->val;
                if (root->left)
                    qu.push(root->left);
                if (root->right)
                    qu.push(root->right);
            }
            if (sum > mx)
            {

                mx = sum;
                ans = level;
            }
        }

        return ans;
    }
};

int main()
{

    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(7);
    root->right = new TreeNode(0);
    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(-8);
    Solution s = Solution();
    s.maxLevelSum(root);

    return 0;
}