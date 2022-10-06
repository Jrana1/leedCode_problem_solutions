// problem link: leetcode.com/problems/odd-even-linked-list/#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *add_node(int val, ListNode *head)
{
    ListNode *tail = NULL;
    ListNode *newNode = new ListNode(val);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
        return head;
    }
    while (head->next)
    {
        head = head->next;
    }
    head->next = newNode;
}
void show(ListNode *head)
{
    while (head)
    {

        cout << head->val << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}
ListNode *oddEvenList(ListNode *head)
{

    ListNode *head_odd = head;
    ListNode *tail_odd = head;
    ListNode *head_even = head->next;
    ListNode *tail_even = head->next;
    int idx = 3;
    head = head->next->next;
    while (head)
    {
        if (idx % 2 == 1)
        {
            tail_odd->next = head;
            tail_odd = head;
            // tail_odd->next = NULL;
            // cout << "odd" << endl;
        }
        else
        {
            tail_even->next = head;
            tail_even = head;
            // tail_even->next = NULL;
            // cout << "even" << endl;
        }
        head = head->next;
        idx++;
    }
    // cout << tail_even->val << endl
    //      << tail_odd->val << endl;
    tail_even->next = NULL;
    tail_odd->next = NULL;
    show(head_odd);
    show(head_even);
    tail_odd->next = head_even;
    show(head_odd);
}
int main()
{
    ListNode *head = NULL;
    head = add_node(1, head);
    add_node(2, head);
    add_node(3, head);
    // add_node(4, head);
    // add_node(5, head);
    // add_node(6, head);
    // add_node(7, head);
    // add_node(8, head);
    show(head);
    oddEvenList(head);

    return 0;
}