// problem link: https://leetcode.com/problems/swap-nodes-in-pairs/

#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *add_node(int x, ListNode *head)
{
    ListNode *tail;
    ListNode *n = new ListNode(x);
    if (head == NULL)
    {
        head = n;
        tail = head;
        return head;
    }
    tail->next = n;
    tail = n;
    return NULL;
}
void show(ListNode *head)
{
    string s;
    while (head)
    {
        head->next ? s = "->" : s = "->NULL";
        cout << head->val << s;
        head = head->next;
    }
}

ListNode *swap_pairs(ListNode *head)
{

    ListNode *prev;
    ListNode *first = head;
    ListNode *second = head->next;
    // int cnt = 0;
    while (1)
    {

        if (first == head)
        {
            first->next = second->next;
            second->next = first;
            head = second;
            prev = first;
            if (first->next)
            {
                first = first->next;
            }
            if (first->next)
            {

                second = first->next;
            }
            else
            {

                break;
            }
        }
        else
        {

            prev->next = second;
            first->next = second->next;
            second->next = first;
            prev = first;
            if (first->next)
            {
                first = first->next;
            }
            if (first->next)
            {

                second = first->next;
            }
            else
            {

                break;
            }
        }
    }
    // cout << first->val << " " << second->val << endl;
    return head;
}

int main()
{
    ListNode *head = NULL;
    head = add_node(1, head);
    add_node(2, head);
    add_node(3, head);
    add_node(4, head);
    add_node(5, head);
    head = swap_pairs(head);
    // ListNode *f = head;
    // ListNode *s = head->next;
    // show(head);
    // cout << endl;
    // f->next = s->next;
    // s->next = f;
    // head = s;
    // f->next = s->next;
    // s->next = f;
    // head->next = s;
    show(head);
    return 0;
}