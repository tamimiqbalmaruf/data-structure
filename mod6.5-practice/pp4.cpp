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

void is_sorted(Node *head)
{
    bool isSorted = true;
    Node *temp = head;

    while (temp != NULL)
    {
        if (temp->next != NULL && temp->val > temp->next->val)
        {
            isSorted = false;
            break;
        }
        temp = temp->next;
    }

    isSorted ? cout << "YES" << endl : cout << "NO" << endl;
}

int main()
{
    Node *head = new Node(2);
    Node *a = new Node(4);
    Node *b = new Node(6);
    Node *c = new Node(5);
    Node *d = new Node(8);
    Node *tail = new Node(4);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;

    is_sorted(head);
    return 0;
}