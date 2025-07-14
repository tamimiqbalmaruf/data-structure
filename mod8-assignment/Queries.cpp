#include <iostream>
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
    }
};

void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

void deleteAtIndex(Node *&head, Node *&tail, int idx)
{
    if (head == NULL) return;

    if (idx == 0)
    {
        Node *delNode = head;
        head = head->next;
        delete delNode;

        if (head == NULL) tail = NULL;
        return;
    }

    Node *temp = head;
    int currIdx = 0;

    while (temp != NULL && currIdx < idx - 1)
    {
        temp = temp->next;
        currIdx++;
    }

    if (temp == NULL || temp->next == NULL) return;

    Node *delNode = temp->next;
    temp->next = delNode->next;

    if (delNode == tail) tail = temp;

    delete delNode;
}

void printLinkedList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++)
    {
        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            insertAtHead(head, tail, V);
        }
        else if (X == 1)
        {
            insertAtTail(head, tail, V);
        }
        else if (X == 2)
        {
            deleteAtIndex(head, tail, V);
        }

        printLinkedList(head);
    }

    return 0;
}
