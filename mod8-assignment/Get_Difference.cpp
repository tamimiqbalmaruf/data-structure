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

void insertAtTail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;

    while (cin >> val && val != -1)
    {
        insertAtTail(head, tail, val);
    }

    int minVal = INT_MAX;
    int maxVal = INT_MIN;

    Node* temp = head;
    while (temp != NULL)
    {
        minVal = min(minVal, temp->val);
        maxVal = max(maxVal, temp->val);
        temp = temp->next;
    }

    cout << maxVal - minVal << endl;

    return 0;
}
