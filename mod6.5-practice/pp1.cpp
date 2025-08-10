#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    };
};

int count_linked_list(Node *head)
{
    int count = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}

int main()
{
    Node *head = new Node(2);
    Node *a = new Node(1);
    Node *b = new Node(5);
    Node *c = new Node(3);
    Node *d = new Node(4);
    Node *e = new Node(8);
    Node *tail = new Node(9);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = tail;

    int count = count_linked_list(head);

    cout << count << endl;
    return 0;
}