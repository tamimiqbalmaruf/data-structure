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
    }
};

void printLeftToRight(Node *head)
{
    cout << "L -> ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printRightToLeft(Node *tail)
{
    cout << "R -> ";
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

bool insertAtIndex(Node *&head, Node *&tail, int index, int val)
{
    Node *newNode = new Node(val);

    if (index == 0 && head == NULL)
    {
        head = newNode;
        tail = newNode;
        return true;
    }

    if (index == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return true;
    }

    Node *temp = head;
    int pos = 0;

    while (temp != NULL && pos < index - 1)
    {
        temp = temp->next;
        pos++;
    }

    if (temp == NULL)
    {
        return false;
    }

    if (temp->next == NULL)
    {
        temp->next = newNode;
        newNode->prev = temp;
        tail = newNode;
        return true;
    }

    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next->prev = newNode;
    temp->next = newNode;
    return true;
}

int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < Q; i++)
    {
        int index, val;
        cin >> index >> val;

        bool success = insertAtIndex(head, tail, index, val);

        if (!success)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            printLeftToRight(head);
            printRightToLeft(tail);
        }
    }

    return 0;
}