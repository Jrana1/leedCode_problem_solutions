#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *left;
    Node *right;
    Node *next;
    Node(int x) : val(x), left(NULL), right(NULL), next(NULL)
    {
    }
};

void inorder(Node *root)
{
    if (root)
    {

        cout << root->val << " ";
        inorder(root->left);
        inorder(root->right);
    }
}
Node *connect(Node *root)
{
    if (root == NULL)
        return NULL;
    queue<Node *> q;
    q.push(root);
    // root->next = NULL;
    // q.push_back(NULL);

    while (!q.empty())
    {

        int n = q.size();
        for (int i = 0; i < n; i++)
        {

            Node *n1 = q.front();

            q.pop();
            if (i == 0)
            {
                cout << n1->val << " ";
            }
            // else
            // {

            //     if (!q.empty())
            //     {
            //         n1->next = q.front();
            //     }
            // }
            q.push(n1->left);
            q.push(n1->right);
        }
        cout << endl;
    }
    // return root;
}
int main()
{
    Node *root = new Node(1);
    Node *n1 = new Node(2);
    Node *n2 = new Node(3);
    Node *n3 = new Node(4);
    Node *n4 = new Node(5);
    Node *n5 = new Node(6);
    Node *n6 = new Node(7);
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;
    n2->left = n5;
    n2->right = n6;
    // inorder(root);
    connect(root);
    return 0;
}