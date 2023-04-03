#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int val) : val(val), left(NULL), right(NULL) {}
};

void minDepth(TreeNode *root, int &x, int &mn)
{

    if (root == NULL)
    {
        return;
    }

    x++;
    if (root->left == NULL and root->right == NULL)
    {

        mn = min(mn, x);
    }
    minDepth(root->left, x, mn);
    minDepth(root->right, x, mn);
    x--;
}

int main()
{

    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    int x = 0;
    int mn = INT_MAX;
    minDepth(root, x, mn);
    cout << mn << endl;
    return 0;
}
