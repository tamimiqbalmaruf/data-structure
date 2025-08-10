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

void print_middle(Node *head, int count)
{
    int middle = count / 2;

    Node *temp = head;

    if (count % 2 == 0)
    {

        while (--middle)
        {
            temp = temp->next;
        }

        cout << temp->val << " " << temp->next->val << endl;
    }
    else
    {
        while (middle--)
        {
            temp = temp->next;
        }

        cout << temp->val << endl;
    }
}

int main()
{
    Node *head = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(3);
    Node *c = new Node(4);
    Node *d = new Node(5);
    Node *tail = new Node(6);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = tail;

    int count = count_linked_list(head);
    print_middle(head, count);
    return 0;
}