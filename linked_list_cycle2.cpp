#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
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

Node *detectCycle(Node *head)
{

    unordered_set<Node *> ht;
    ht.insert(head);
    while (head)
    {
        if (ht.find(head->next) != ht.end())
        {
            return head->next;
        }
        else
        {
            ht.insert(head->next);
        }
        head = head->next;
    }

    return NULL;
}
int findIdx(Node *head, Node *res)
{

    int idx = 0;
    while (head)
    {
        if (head == res)
        {
            return idx;
        }
        idx++;
        head = head->next;
    }
    return 0;
}

Node *cycle(Node *head)
{

    Node *slow = head;
    Node *fast = head;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            Node *start = head;

            while (slow != start)
            {
                slow = slow->next;
                start = start->next;
            }
            return slow;
        }
    }
    return NULL;
}
Node *fun(Node *head)
{
}
int main()
{

    Node *head = new Node(3);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(-4);
    head->next->next->next->next = head;

    return 0;
}