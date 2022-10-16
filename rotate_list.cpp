// problem link: https://leetcode.com/problems/rotate-list/
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

ListNode *find_count_and_tail(ListNode *head, int *cnt)
{

    while (head->next)
    {

        *cnt = *cnt + 1;
        head = head->next;
    }
    *cnt = *cnt + 1;
    return head;
}
ListNode *rotateRight(ListNode *head, int k)
{

    int cnt = 0;
    ListNode *tail = find_count_and_tail(head, &cnt);
    // cout << tail->val << " " << cnt << endl;
    if (k >= cnt)
    {
        k = k % cnt;
    }
    ListNode *tmp = head;
    for (int i = 0; i < cnt - k - 1; i++)
    {
        head = head->next;
    }
    ListNode *newHead = head->next;
    head->next = NULL;
    tail->next = tmp;
    return newHead;
}
int main()
{

    ListNode *head = NULL;
    head = add_node(1, head);
    add_node(2, head);
    // add_node(3, head);
    // add_node(4, head);
    // add_node(5, head);
    show(head);
    cout << endl;
    head = rotateRight(head, 2);
    show(head);
    return 0;
}