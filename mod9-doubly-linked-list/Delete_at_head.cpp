#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    };
};

void print_forward(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
}

// void delete_at_head(Node *&head, Node *&tail)
// {
//     Node *deleteNode = head;

//     head = head->next;
//     delete deleteNode;

//     if (head == NULL)
//     {
//         tail = NULL;
//         return;
//     }
//     head->prev = NULL;
// }

void delete_at_head(Node *&head, Node *&tail)
{
    if (head == NULL)
        return; // Empty list

    Node *deleteNode = head;
    head = head->next;

    if (head == NULL)
    {
        // List had only one node, now it's empty
        tail = NULL;
    }
    else
    {
        head->prev = NULL;
    }

    delete deleteNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_at_head(head, tail);
    delete_at_head(head, tail);
    print_forward(head);

    return 0;
}