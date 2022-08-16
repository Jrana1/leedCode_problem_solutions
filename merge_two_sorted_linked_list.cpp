#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

class List
{
public:
    Node *head;
    List() { head = NULL; }
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
    void delete_val(int x)
    {

        Node *ptr = head;
        while (ptr->next)
        {
            if (head->data == x)
            {
                Node *p = head;
                head = head->next;
                ptr = head;
                delete p;
            }
            if (ptr->next->data == x)
            {
                Node *p = ptr->next;
                ptr->next = ptr->next->next;
                delete p;
            }
            ptr = ptr->next;
        }
    }
};

int main()
{
    List l1;
    l1.add_node(2);
    l1.add_node(9);
    // l1.add_node(2);
    // l1.add_node(2);
    l1.delete_val(2);
    l1.display();

    return 0;
}