// problem link : https://leetcode.com/problems/merge-nodes-in-between-zeros
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    ListNode *add_node(ListNode *next, ListNode *head)
    {

        if (!head)
        {
            head = next;
            return head;
        }
        while (head->next)
        {
            head = head->next;
        }
        head->next = next;
        return NULL;
    }
};

void show(ListNode *head)
{

    while (head)
    {

        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
#include <bits/stdc++.h>
using namespace std;
ListNode *mergeNodes(ListNode *head)
{
    head = head->next;
    ListNode *tmp = NULL;
    int i = 0;
    // vector<int> ans;
    while (head)
    {

        int sum = 0;
        while (head->val != 0)
        {
            sum += head->val;
            head = head->next;
        }
        if (i == 0)
        {
            ListNode *n1 = new ListNode(sum);
            tmp = tmp->add_node(n1, tmp);
            i++;
        }
        else
        {
            ListNode *n1 = new ListNode(sum);
            tmp->add_node(n1, tmp);
        }
        head = head->next;
    }
    // head = NULL;
    // ListNode *n = new ListNode(ans[0]);
    // head = head->add_node(n, head);
    // for (auto x = 1; x < ans.size(); x++)
    // {
    //     ListNode *n1 = new ListNode(ans[x]);
    //     head->add_node(n1, head);
    // }
    return tmp;
}

ListNode *merge(ListNode *head)
{

    head = head->next;
    ListNode *ptr1, *ptr2;
    ptr1 = head;
    ptr2 = head;
    while (ptr2)
    {
        int sum = 0;
        while (ptr2->val != 0)
        {
            sum += ptr2->val;
            ptr2 = ptr2->next;
        }
        ptr1->val = sum;
        ptr2 = ptr2->next;
        ptr1->next = ptr2;
        ptr1 = ptr2;
    }
    return head;
}

int main()
{
    ListNode *head = NULL;
    ListNode *n1 = new ListNode(0);
    ListNode *n2 = new ListNode(1);
    ListNode *n3 = new ListNode(0);
    ListNode *n4 = new ListNode(3);
    ListNode *n5 = new ListNode(0);
    ListNode *n6 = new ListNode(2);
    ListNode *n7 = new ListNode(2);
    ListNode *n8 = new ListNode(0);
    head = head->add_node(n1, head);
    head->add_node(n2, head);
    head->add_node(n3, head);
    head->add_node(n4, head);
    head->add_node(n5, head);
    head->add_node(n6, head);
    head->add_node(n7, head);
    head->add_node(n8, head);
    show(head);
    head = merge(head);
    show(head);
    return 0;
}