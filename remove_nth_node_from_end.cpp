// problem link:https://leetcode.com/problems/remove-nth-node-from-end-of-list

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
        cout << ptr->val << "->";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;
}
int count()
{
    Node *ptr = head;
    int cnt = 0;
    while (ptr)
    {

        cnt++;
        ptr = ptr->next;
    }
    return cnt;
}

Node *removeNthFromEnd(Node *head, int n)
{

    int cnt = count();
    int idx = cnt - n;
    // Case 1: if the list has only one node
    if ((cnt == 1 && n == 1) || head == NULL)
    {
        return NULL;
    }
    // Case 2: if we have to delete the head node of the list
    if (idx == 0 && cnt > 1)
    {
        Node *p = head;
        head = head->next;
        delete p;
        return head;
    }
    // Case 3: if we have to delete a node which locates at the middle or at tail
    for (int i = 1; i < idx; i++)
    {

        head = head->next;
    }
    Node *p = head->next;
    head->next = head->next->next;
    delete p;
    // cout << head->val << endl;
}

int main()
{

    add_node(1);
    // add_node(2);
    // add_node(3);
    // add_node(4);
    // add_node(5);
    display();
    head = removeNthFromEnd(head, 1);
    display();
    return 0;
}