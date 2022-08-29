// problem link:https://leetcode.com/problems/palindrome-linked-list/

#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
} * head;

Node *create_node(int val)
{
    Node *ptr = new Node;
    ptr->data = val;
    ptr->next = NULL;
    return ptr;
}
void add_node(int val)
{
    Node *ptr = create_node(val);
    // cout << ptr->data << endl;
    if (head == NULL)
    {
        head = ptr;
        return;
    }
    Node *p = head;
    while (p->next)
    {
        p = p->next;
    }
    p->next = ptr;
}
void add_node(Node *ptr)
{
    // Node *ptr = create_node(val);
    //  cout << ptr->data << endl;
    if (head == NULL)
    {
        head = ptr;
        return;
    }
    Node *p = head;
    while (p->next)
    {
        p = p->next;
    }
    p->next = ptr;
}
void display()
{
    Node *ptr = head;
    while (ptr)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}
int count()
{

    int cnt = 0;
    Node *tmp = head;
    while (tmp)
    {

        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

bool isPalindrome()
{
    if (head == NULL || head->next == NULL)
    {
        return true;
    }
    int mid = count() / 2;
    Node *tmp = head;
    if (count() % 2 == 1)
    {

        for (int i = 0; i < mid; i++)
        {
            tmp = tmp->next;
        }
        stack<int> st;
        tmp = tmp->next;
        while (tmp)
        {
            st.push(tmp->data);
            tmp = tmp->next;
        }
        tmp = head;
        while (!st.empty())
        {
            if (tmp->data != st.top())
            {
                return false;
            }
            // cout << tmp->data << " " << st.top() << endl;
            st.pop();
            tmp = tmp->next;
        }
        return true;
    }
    else
    {

        for (int i = 0; i < mid; i++)
        {
            tmp = tmp->next;
        }
        stack<int> st;
        // tmp = tmp->next;
        while (tmp)
        {
            st.push(tmp->data);
            tmp = tmp->next;
        }
        tmp = head;
        while (!st.empty())
        {
            if (tmp->data != st.top())
            {
                return false;
            }
            // cout << tmp->data << " " << st.top() << endl;
            st.pop();
            tmp = tmp->next;
        }
        return true;
    }
}

bool isPalindrome(Node *head)
{

    int mid = count() / 2;
    Node *tmp = head;
    for (int i = 0; i < mid; i++)
    {
        tmp = tmp->next;
    }
    cout << tmp->data << endl;
}

int main()
{

    add_node(2);
    add_node(3);
    add_node(1);
    add_node(6);
    add_node(2);

    // add_node(1);

    display();
    isPalindrome(head);
    return 0;
}
