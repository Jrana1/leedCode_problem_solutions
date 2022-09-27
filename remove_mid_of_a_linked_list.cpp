// problem link: https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list

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

// function to find the len of a linked list
int len(Node *head)
{

    int cnt = 0;
    while (head)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

/// function to delete the middle node of a linked list
Node *deleteMiddle(Node *head)
{

    // Case 1: if the list has no Node or only one Node
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    // first find the length of the linked list
    // mid = len/2
    int mid = len(head) / 2;
    for (int i = 1; i < mid; i++)
    {
        head = head->next;
    }
    Node *p = head->next;
    head->next = head->next->next;
    delete p;
}

int main()
{

    // add_node(1);
    // add_node(2);
    // add_node(3);
    // add_node(4);
    // // add_node(5);
    // // add_node(6);
    // display();
    // deleteMiddle(head);
    // display();

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(9);
    pq.push(1);
    pq.push(3);
    pq.push(10);
    pq.push(5);
    while (!pq.empty())
    {
        cout << pq.top() << "->";
        pq.pop();
    }
    cout << "NULL";

    return 0;
}