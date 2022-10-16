// problem link: https://leetcode.com/problems/leaf-similar-trees/description
#include <bits/stdc++.h>
using namespace std;
class Tree
{
public:
    int val;
    Tree *left, *right;
    Tree(int v) : val(v), left(NULL), right(NULL) {}
};
void dfs(Tree *root, int &h)
{
    if (root == NULL)
    {
        return;
    }
    if (root)
    {

        h++;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << h << " " << root->val << endl;
        // h--;
    }

    dfs(root->left, h);
    // cout << root->val << " ";
    dfs(root->right, h);
    h--;
}

bool check(Tree *n1, Tree *n2, int x, int y)
{

    if (((n1->left && n1->left->val == x) && (n2->left && n2->left->val == y)) || ((n1->left && n1->left->val == y) && (n2->left && n2->left->val == x)))
    {
        return true;
    }
    if (((n1->right && n1->right->val == x) && (n2->right && n2->right->val == y)) || ((n1->right && n1->right->val == y) && (n2->right && n2->right->val == x)))
    {
        return true;
    }
    if (((n1->right && n1->right->val == x) && (n2->left && n2->left->val == y)) || ((n1->right && n1->right->val == y) && (n2->left && n2->left->val == x)))
    {
        return true;
    }
    if (((n1->left && n1->left->val == x) && (n2->right && n2->right->val == y)) || ((n1->left && n1->left->val == y) && (n2->right && n2->right->val == x)))
    {
        return true;
    }
    return false;
}

bool isCousin(Tree *root, int x, int y)
{

    queue<Tree *> q;
    q.push(root->left);
    q.push(root->right);
    while (!q.empty())
    {

        Tree *b1 = q.front();
        q.pop();
        Tree *b2;
        if (!q.empty())
        {
            b2 = q.front();
            q.pop();
        }

        if (check(b1, b2, x, y))
        {
            return true;
        }
        if (b1->left)
        {
            q.push(b1->left);
        }
        if (b1->right)
        {
            q.push(b1->right);
        }
        if (b2->left)
        {
            q.push(b2->left);
        }
        if (b2->right)
        {
            q.push(b2->right);
        }
    }
    return false;
}
int main()
{
    // first tree construction

    Tree *root1 = new Tree(1);
    Tree *n1 = new Tree(2);
    Tree *n2 = new Tree(3);
    Tree *n3 = new Tree(9);
    Tree *n4 = new Tree(4);
    Tree *n5 = new Tree(7);
    Tree *n6 = new Tree(5);
    Tree *n7 = new Tree(10);
    // Tree *n8 = new Tree(4);
    // Tree *n9 = new Tree(10);
    // Tree *n10 = new Tree(11);

    root1->left = n1;
    root1->right = n2;

    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n4->left = n6;
    n5->right = n7;

    // cout << isCousin(root1, 5, 10) << endl;
    vector<int> v = {12, 345, 2, 6, 7896};
    for (auto x : v)
    {
        cout << (int)log10(x) + 1 << endl;
    }
}