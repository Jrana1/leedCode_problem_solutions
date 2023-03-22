#include <bits/stdc++.h>
using namespace std;
struct Node
{
    char val;
    Node *next;
    Node(char val) : val(val), next(NULL) {}
};
Node *addNode(char c, Node *head)
{
    Node *newNode = new Node(c);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    while (head->next)
        head = head->next;
    head->next = newNode;
    return NULL;
}
void show(Node *head)
{

    while (head)
    {
        cout << head->val << (head->next ? "->" : "->null\n");
        head = head->next;
    }
}

void fun(Node *head, string s)
{
    int n = s.size();
    unordered_set<char> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(s.at(i));
    }
    unordered_set<char> st1;
    st1 = st;
    vector<Node *> ans;
    for (Node *ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next)
    {

        Node *ptr2 = ptr1;
        for (int i = 0; ptr2 != NULL and i < n; i++)
        {
            if (st.find(ptr2->val) != st.end())
            {
                st.erase(ptr2->val);
            }

            ptr2 = ptr2->next;
        }
        if (st.empty())
        {
        }
        cout << endl;
    }
}

int main()
{

    vector<char> v = {'a', 'b', 'c', 'a', 'd', 'b', 'c', 'a'};
    Node *head = NULL;

    for (int i = 0; i < v.size(); i++)
    {

        i == 0 ? head = addNode(v[i], head) : addNode(v[i], head);
    }
    show(head);
    // fun(head, "bac");
    Node *ptr = head;
    Node *p = ptr->next->next;
    ptr->next->next = NULL;
    Node *tmp = ptr;
    show(tmp);
    show(head);

    return 0;
}