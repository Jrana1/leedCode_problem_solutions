#include <bits/stdc++.h>
using namespace std;
#define eq ==
#define ne !=
#define g >
#define l <
#define ge = >
#define le <=
struct Node
{
    int val;
    Node *next;
    Node(int val) : val(val), next(NULL) {}
};
void show(Node *head)
{
    while (head)
    {
        cout << head->val << ((head->next) ? "->" : "->nullPtr\n");
        head = head->next;
    }
}

Node *addNode(int val, Node *head)
{

    Node *newNode = new Node(val);
    if (head eq NULL)
    {
        head = newNode;
        return head;
    }
    while (head->next)
    {
        head = head->next;
    }
    head->next = newNode;
    return NULL;
}
Node *merge(Node *head1, Node *head2)
{

    if (head1 eq NULL)
    {
        return head2;
    }
    if (head2 eq NULL)
    {
        return head1;
    }
    if (head1 eq NULL and head2 eq NULL)
    {
        return head1;
    }

    Node *newHead = NULL;

    if (head1->val le head2->val)
    {
        newHead = head1;
        head1 = head1->next;
        newHead->next = NULL;
    }

    else
    {
        newHead = head2;
        head2 = head2->next;
        newHead->next = NULL;
    }
    ListNode *tmp = newHead;

    while (head1 and head2)
    {

        if (head1->val le head2->val)
        {
            tmp->next = head1;
            tmp = tmp->next;
            head1 = head1->next;
            tmp->next = NULL;
        }

        else
        {
            tmp->next = head2;
            tmp = tmp->next;
            head2 = head2->next;
            tmp->next = NULL;
        }
    }
    if (head1)
        tmp->next = head1;
    if (head2)
        tmp->next = head2;

    return newHead;
}

int main()
{

    ListNode *head1 = NULL, *head2 = NULL;
    vector<vector<int>> vec = {
        {1, 4, 5},
        {1, 3, 4},
        {2, 6}};
    vector<Node *> nodes;
    for (int i = 0; i < vec.size(); i++)
    {
        Node *ptr = NULL;
        for (int j = 0; j < vec[i].size(); j++)
        {

            if (j eq 0)
            {
                ptr = addNode(vec[i][j], ptr);
            }
            else
            {
                addNode(vec[i][j], ptr);
            }
        }
        nodes.push_back(ptr);
    }
    Node *ans = NULL;
    for (int i = 0; i < nodes.size(); i++)
    {
        ans = merge(ans, nodes[i]);
    }
    show(ans);
    return 0;
}