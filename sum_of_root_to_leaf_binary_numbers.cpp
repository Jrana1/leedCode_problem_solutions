// problme link: https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers
#include <bits/stdc++.h>
using namespace std;
struct Tree
{
    int val;
    Tree *left, *right;
    Tree(int v) : val(v), left(NULL), right(NULL) {}
};

void inorder(Tree *root, int &sum, string &str)
{

    if (root == NULL)
    {
        return;
    }
    str += (char)(root->val + '0');
    if (root->left == NULL && root->right == NULL)
    {
        int tmp = 0;
        int len = str.size();
        for (int i = 0; i < len; i++)
        {
            tmp += (str.at(i) - '0') * (1 << len - 1 - i);
        }
        sum += tmp;
    }
    inorder(root->left, sum, str);
    // cout << root->val << " ";
    inorder(root->right, sum, str);
    str.erase(str.end() - 1);
}
int main()
{
    Tree *root = new Tree(1);
    Tree *n1 = new Tree(0);
    Tree *n2 = new Tree(1);
    Tree *n3 = new Tree(0);
    Tree *n4 = new Tree(1);
    Tree *n5 = new Tree(0);
    Tree *n6 = new Tree(1);
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;
    n2->left = n5;
    n2->right = n6;
    int sum = 0;
    string str = "";
    inorder(root, sum, str);
    cout << sum << endl;
    // cout << char(2 + '0') << endl;
    return 0;
}