#include <bits/stdc++.h>
using namespace std;
#define ne !=
struct Tree
{
    int val;
    Tree *left, *right;
    Tree(int val) : val(val), left(NULL), right(NULL) {}
};
void show(Tree *root, vector<int> &store)
{

    if (!root)
    {
        store.push_back(-1);
        return;
    }
    show(root->left, store);
    store.push_back(root->val);
    show(root->right, store);
}

void levelOrder(Tree *root)
{

    queue<Tree *> q;
    INT_M
    q.push(root);
    int while (!q.empty())
    {

        int n = q.size();
        int i = 0;
        while (i < n)
        {
            root = q.front();
            q.pop();
            cout << root->val << " ";

            if (root->left)
            {
                q.push(root->left);
            }
            if (root->right)
            {
                q.push(root->right);
            }
            i++;
        }
        cout << endl;
    }
}

int main()
{

    Tree *root = new Tree(1);
    root->left = new Tree(2);
    root->right = new Tree(2);
    root->left->left = new Tree(3);
    root->left->right = new Tree(4);
    root->right->left = new Tree(4);
    root->right->right = new Tree(3);

    levelOrder(root);
    // vector<int> store;
    // show(root, store);
    // for (auto x : store)
    // {
    //     cout << x << " ";
    // }
    // cout << endl;
    // int n = store.size();
    // int mid = n / 2;

    // int l = mid - 1;
    // int r = mid + 1;
    // while (l >= 0 and r < n)
    // {
    //     if (store[l] ne store[r])
    //     {
    //         cout << "false" << endl;
    //         return 0;
    //     }
    //     l--;
    //     r++;
    // }
    // vector<int> a;
    // if (a == store)
    // {
    // }
    // cout << "true" << endl;

    return 0;
}