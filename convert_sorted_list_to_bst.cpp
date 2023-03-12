#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
    Node(int val) : val(val), next(NULL) {}
};

struct TreeNode
{
    int val;
    TreeNode *left, *right;
    TreeNode(int val) : val(val), left(NULL), right(NULL) {}
};
void show(Node *head)
{
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void inorder(TreeNode *root)
{

    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
TreeNode *sortedListToBST(Node *head)
{

    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {

        return new TreeNode(head->val);
    }

    Node *slow = head, *fast = head, *prev = NULL;

    while (fast and fast->next)
    {

        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = NULL;

    TreeNode *root = new TreeNode(slow->val);
    root->left = sortedListToBST(head);
    root->right = sortedListToBST(slow->next);
    return root;
}

int main()
{

    Node *head = new Node(-10);
    head->next = new Node(-3);
    head->next->next = new Node(0);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(9);
    show(head);

    TreeNode *root = sortedListToBST(head);
    inorder(root);

    return 0;
}