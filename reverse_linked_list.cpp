
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int val;
    Node *next;
};

Node *create_node(int val)
{

    Node *newNode = new Node;
    newNode->next = NULL;
    newNode->val = val;
    return newNode;
}
Node *head = NULL;
void add_node(int val)
{

    Node *ptr = create_node(val);
    if (head == NULL)
    {
        head = ptr;
        return;
    }
    Node *hptr = head;
    while (hptr->next)
    {
        hptr = hptr->next;
    }
    hptr->next = ptr;
}

void display()
{

    Node *ptr = head;
    while (ptr)
    {
        cout << ptr->val << " ";
        ptr = ptr->next;
    }
}

Node *reverse()
{

    Node *prev = NULL;
    Node *curr = head;
    Node *nxt;
    while (curr)
    {
        nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}

void reverse_recursive(Node *p, Node *q)
{

    // if (p == NULL)
    // {
    //     head = q;
    // }
    // else
    // {
    //     reverse_recursive(p, p->next);
    //     p->next = q;
    // }

    // if (p)
    // {
    //     reverse_recursive(p, p->next);
    //     p->next = q;
    // }
    // else
    // {
    //     head = q;
    // }
}

Node *reverse_recursive1(Node *ptr)
{

    if (ptr == NULL || ptr->next == NULL)
    {
        return ptr;
    }
    Node *newNode = reverse_recursive1(ptr->next);
    ptr->next->next = ptr;
    ptr->next = NULL;
    return newNode;
}

Node *mid()
{

    Node *slow = head;
    Node *fast = head;
    while (fast->next && slow)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
int main()
{
    queue<int> a;
    a.

        add_node(9);
    add_node(5);
    add_node(1);
    // add_node(8);
    // add_node(2);
    // add_node(7);
    // add_node(12);
    display();
    // head = reverse_recursive1(head);
    // cout << endl;
    // display();
    cout << endl;
    cout << mid()->val << endl;
    return 0;
}