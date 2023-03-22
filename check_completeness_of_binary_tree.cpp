#include <bits/stdc++.h>
using namespace std;
#define ne !=
struct Tree
{
    int val;
    Tree *left, *right;
    Tree(int val) : val(val), left(NULL), right(NULL) {}
};

bool levelOrder(Tree *root)
{

    queue<Tree *> q;
    q.push(root);
    bool isNullSoFar = false;
    while (!q.empty())
    {
        root = q.front();
        q.pop();
        if (root == NULL)
        {
            isNullSoFar = true;
        }
        else
        {
            if (isNullSoFar == true)
            {
                return false;
            }
            else
            {
                q.push(root->left);
                q.push(root->right);
            }
        }
    }
    return true;
}

int main()
{

    Tree *root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(3);
    root->left->left = new Tree(4);
    root->left->right = new Tree(5);
    // root->right->left = new Tree(6);
    root->right->right = new Tree(3);

    cout << levelOrder(root) << endl;

    return 0;
}