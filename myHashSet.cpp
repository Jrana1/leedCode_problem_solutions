#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class MyHashSet
{
public:
    MyHashSet()
    {
        Set.resize(10, NULL);
    }
    Node *createNode(int val)
    {

        Node *ptr = new Node;
        ptr->next = NULL;
        ptr->data = val;
        return ptr;
    }
    void add(int key)
    {
        if (contains(key))
        {
            return;
        }
        int index = hash(key);
        Node *ptr = createNode(key);
        if (Set[index] == NULL)
        {
            Set[index] = ptr;
            return;
        }
        ptr->next = Set[index];
        Set[index] = ptr;
    }

    void remove(int key)
    {

        int index = hash(key);
        if (Set[index] == NULL)
        {
            return;
        }
        if (Set[index]->data == key)
        {

            Node *ptr = Set[index];
            Set[index] = Set[index]->next;
            delete ptr;
            return;
        }
        Node *ptr = Set[index];
        while (ptr)
        {

            if (ptr->next && ptr->next->data == key)
            {

                Node *t = ptr->next;
                if (ptr->next->next)
                {
                    ptr->next = ptr->next->next;
                    delete t;
                    return;
                }
                ptr->next = NULL;
                delete t;
                return;
            }
            ptr = ptr->next;
        }
    }

    bool contains(int key)
    {
        int index = hash(key);
        Node *ptr = Set[index];
        while (ptr)
        {

            if (ptr->data == key)
            {
                return true;
            }
            ptr = ptr->next;
        }
        return false;
    }
    int hash(int k)
    {

        return k % 10;
    }
    void display()
    {
        int i = 0;
        for (auto head : Set)
        {
            cout << i << "=";
            i++;
            while (head)
            {
                cout << head->data << "->";
                head = head->next;
            }
            cout << "NULL" << endl;
        }
    }

protected:
    vector<Node *> Set;
};

int main()
{
    MyHashSet mh;

    mh.add(9);
    mh.remove(19);
    mh.add(14);
    mh.remove(19);
    mh.remove(9);
    mh.add(0);
    mh.add(3);
    mh.add(4);
    mh.add(0);
    mh.remove(9);
    mh.display();
    return 0;
}