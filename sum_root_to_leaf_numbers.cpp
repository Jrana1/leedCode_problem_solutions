
#include <bits/stdc++.h>
using namespace std;
struct Tree
{
    /* data */

    int val;
    Tree *left;
    Tree *right;
    Tree(int x) : val(x), left(NULL), right(NULL)
    {
    }
};

void inorder(Tree *root, int &sum)
{
    static int tmp = 0;
    if (root == NULL)
    {
        return;
    }
    tmp = tmp * 10 + root->val;

    if (root->left == NULL && root->right == NULL)
    {
        sum += tmp;
    }
    inorder(root->left, sum);
    inorder(root->right, sum);
    tmp = tmp / 10;
}

void hasPathSum(Tree *root, int sum, vector<int> &ans)
{

    static int tmp = 0;
    if (root == NULL)
    {
        return;
    }
    tmp += root->val;
    if (root->left == NULL && root->right == NULL)
    {
        ans.push_back(tmp);
    }
    hasPathSum(root->left, sum, ans);
    hasPathSum(root->right, sum, ans);
    tmp = tmp - root->val;
}

int main()
{
    Tree *root = new Tree(4);
    Tree *n1 = new Tree(9);
    Tree *n2 = new Tree(0);
    Tree *n3 = new Tree(5);
    Tree *n4 = new Tree(1);
    Tree *n5 = new Tree(7);
    Tree *n6 = new Tree(12);
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;
    n2->left = n5;
    n2->right = n6;
    vector<int> ans;
    int sum = 0;
    // inorder(root, sum);
    // cout << sum << endl;
    hasPathSum(root, 13, ans);
    for (auto x : ans)
    {
        cout << x << " ";
    }
    return 0;
}