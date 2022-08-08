// problem link: https://leetcode.com/problems/linked-list-cycle

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

bool hasCycle()
{
    set<Node *> st;
    Node *ptr = head;
    while (ptr)
    {
        if (st.find(ptr) != st.end())
        {
            return true;
        }
        else
        {
            st.insert(ptr);
        }
        ptr = ptr->next;
    }
    return false;
}

bool hasCycle2()
{

    Node *fast = head;
    Node *slow = head;
    while (slow && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{

    add_node(2);
    add_node(3);
    add_node(6);
    cout << hasCycle2() << endl;
    head->next->next->next = head->next->next;
    cout << hasCycle2() << endl;
    return 0;
}