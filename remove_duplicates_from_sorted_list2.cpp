#include <bits/stdc++.h>
using namespace std;

struct Node
{

    int val;
    Node *next;
    Node(int val) : val(val), next(NULL) {}
};
Node *addNode(int val, Node *head)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    while (head->next)
    {
        head = head->next;
    }
    head->next = newNode;
    return head;
}
void show(Node *head)
{

    while (head)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

Node *delete_duplicates(Node *head)
{

    Node *tmp = head;

    for (Node *ptr1 = head; ptr1 = !NULL;)
    {

        if (ptr1->val != ptr1->next->val)
        {
        }
    }
    return NULL;
}

int main()
{
    Node *head = NULL;
    head = addNode(1, head);
    vector<int> v = {1, 2, 3, 3, 4, 4, 5};
    for (auto x : v)
    {
        addNode(x, head);
    }
    delete_duplicates(head);
    return 0;
}