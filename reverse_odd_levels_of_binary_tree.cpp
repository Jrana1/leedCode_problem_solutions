// problem link : https://leetcode.com/problems/reverse-odd-levels-of-binary-tree/
#include <bits/stdc++.h>
using namespace std;
struct Tree
{

    int val;
    Tree *left, *right;
    Tree(int v) : val(v), left(NULL), right(NULL) {}
};

void inorder(Tree *root)
{

    if (root)
    {

        inorder(root->left);
        cout << root->val << " ";
        inorder(root->right);
    }
}

Tree *myFun(Tree *root)
{

    queue<Tree *> q;
    q.push(root);
    int k = 0;
    while (!q.empty())
    {

        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            root = q.front();
            q.pop();
            if (k % 2 == 1)
            {

                cout << root->val << " ";
            }
            if (root->left)
            {
                q.push(root->left);
            }
            if (root->right)
            {
                q.push(root->right);
            }
        }
        k++;
    }
}
int main()
{
    Tree *root = new Tree(2);
    Tree *n1 = new Tree(3);
    Tree *n2 = new Tree(5);
    Tree *n3 = new Tree(8);
    Tree *n4 = new Tree(13);
    Tree *n5 = new Tree(21);
    Tree *n6 = new Tree(34);
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;
    n2->left = n5;
    n2->right = n6;
    myFun(root);
    return 0;
}