// problem link: https://leetcode.com/problems/add-two-numbers/

#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *add_node(int val, ListNode *head)
{

    ListNode *tail;
    ListNode *n = new ListNode(val);
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
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{

    int crr = 0;
    ListNode *l3 = NULL;
    int cnt = 0;
    while (l1 && l2)
    {

        int tm = l1->val + l2->val + crr;
        if (tm > 9)
        {
            if (cnt == 0)
            {
                l3 = add_node(tm - 10, l3);
                cnt++;
            }
            else
            {
                add_node(tm - 10, l3);
            }
            crr = 1;
        }
        else
        {
            if (cnt == 0)
            {
                l3 = add_node(tm, l3);
                cnt++;
            }
            else
            {
                add_node(tm, l3);
            }
            crr = 0;
        }
        l1 = l1->next;
        l2 = l2->next;
    }

    while (l1)
    {

        int tm = l1->val + crr;
        if (tm > 9)
        {
            if (cnt == 0)
            {
                l3 = add_node(tm - 10, l3);
                cnt++;
            }
            else
            {
                add_node(tm - 10, l3);
            }
            crr = 1;
        }
        else
        {
            if (cnt == 0)
            {
                l3 = add_node(tm, l3);
                cnt++;
            }
            else
            {
                add_node(tm, l3);
            }
            crr = 0;
        }
        l1 = l1->next;
    }
    while (l2)
    {

        int tm = l2->val + crr;
        if (tm > 9)
        {
            if (cnt == 0)
            {
                l3 = add_node(tm - 10, l3);
                cnt++;
            }
            else
            {
                add_node(tm - 10, l3);
            }
            crr = 1;
        }
        else
        {
            if (cnt == 0)
            {
                l3 = add_node(tm, l3);
                cnt++;
            }
            else
            {
                add_node(tm, l3);
            }
            crr = 0;
        }
        l2 = l2->next;
    }
    if (crr == 1)
    {
        add_node(crr, l3);
    }
    return l3;
}

void fun(ListNode *l1, ListNode *l2)
{

    if (l1 == NULL || l2 == NULL)
    {
        return;
    }
    fun(l1->next, l2->next);
    cout << l1->val << " " << l2->val << endl;
}
int main()
{
    ListNode *l1 = NULL;
    l1 = add_node(0, l1);
    add_node(3, l1);
    add_node(1, l1);
    add_node(4, l1);
    add_node(5, l1);
    add_node(6, l1);
    add_node(7, l1);
    // add_node(9, l1);
    // // show(l1);
    // // cout << endl;
    ListNode *l2 = NULL;
    l2 = add_node(9, l2);
    add_node(9, l2);
    add_node(9, l1);
    add_node(9, l1);
    fun(l1, l2);
    // show(l2);

    // ListNode *l3 = addTwoNumbers(l1, l2);
    // show(l3);
    return 0;
}