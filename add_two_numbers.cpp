// problem link: https://leetcode.com/problems/add-two-numbers

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};

class ListNode
{
public:
    Node *head;
    ListNode()
    {
        head = NULL;
    }
    Node *make_node(int x)
    {
        Node *newNode = new Node;
        newNode->data = x;
        newNode->next = NULL;
        return newNode;
    }
    void create_list(int x)
    {

        Node *newNode = make_node(x);
        if (head == NULL)
        {
            head = newNode;
            return;
        }

        Node *tmp = head;
        while (tmp->next)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
    void show()
    {

        for (Node *tmp = head; tmp != NULL; tmp = tmp->next)
        {
            cout << tmp->data << endl;
        }
    }
};

int get_num(Node *tmp)
{
    stack<int> s;
    while (tmp)
    {
        s.push(tmp->data);
        tmp = tmp->next;
    }
    int num = 0;
    while (!s.empty())
    {
        num = num * 10 + s.top();
        s.pop();
    }
    return num;
}

int main()
{
    ListNode l1, l2;
    l1.create_list(9);
    l1.create_list(9);
    l1.create_list(9);
    l1.create_list(9);
    l1.create_list(9);
    l1.create_list(9);
    l1.create_list(9);

    l2.create_list(9);
    l2.create_list(9);
    l2.create_list(9);
    l2.create_list(9);

    int n1 = get_num(l1.head);
    int n2 = get_num(l2.head);
    int n3 = n1 + n2;
    ListNode l3;
    if (n3 == 0)
    {
        l3.create_list(0);
    }
    else
    {
        while (n3 > 0)
        {
            l3.create_list(n3 % 10);
            n3 = n3 / 10;
        }
    }

    l3.show();
    return 0;
}