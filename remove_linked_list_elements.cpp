/// problem link: https://leetcode.com/problems/remove-linked-list-elements

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

bool search(int val)
{
    Node *ptr = head;

    while (ptr)
    {
        if (ptr->val == val)
        {
            return true;
        }
        ptr = ptr->next;
    }
    return false;
}

void delete_val(int val)
{

    if (head->val == val)
    {
        Node *ptr = head;
        head = head->next;
        delete ptr;
        return;
    }
    Node *ptr = head;
    while (ptr)
    {

        if (ptr->next->val == val)
        {
            Node *to_be_destroyed = ptr->next;
            ptr->next = ptr->next->next;
            delete to_be_destroyed;
            return;
        }
        ptr = ptr->next;
    }
    cout << ptr->val << endl;
}

int find_count(int val)
{
    Node *ptr = head;
    int cnt = 0;
    while (ptr)
    {
        if (ptr->val == val)
        {
            cnt++;
        }
        ptr = ptr->next;
    }
    return cnt;
}
int main()
{
    add_node(6);
    add_node(6);
    add_node(3);
    add_node(6);

    int cnt = find_count(6);
    while (cnt--)
    {
        delete_val(6);
    }
    // map<int, int> st;
    // Node *ptr = head;
    // while (ptr)
    // {

    //     st[ptr->val]++;
    //     ptr = ptr->next;
    // }

    // auto it = st.find(6);
    // while (it->second != 0)
    // {
    //     delete_val(6);
    //     it->second--;
    // }

    // st.find(6)->second--;
    // for (auto it = st.begin(); it != st.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    return 0;
}