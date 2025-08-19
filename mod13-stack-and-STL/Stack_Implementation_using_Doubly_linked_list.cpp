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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

void delete_at_tail(Node *&head, Node *&tail)
{
    if (head == NULL)
        return;

    Node *deleteNode = tail;

    tail = tail->prev;

    if (tail == NULL)
    {
        head = NULL;
    }
    else
    {
        tail->next = NULL;
    }

    delete deleteNode;
}

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    int sz = 0;

    void push(int val)
    {
        sz++;
        insert_at_tail(head, tail, val);
    }
    void pop()
    {
        sz--;
        delete_at_tail(head, tail);
    }
    int top()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return head == NULL;
    }
};

int main()
{
    myStack st;

    int val;

    while (cin >> val && val != -1)
    {
        st.push(val);
    }

    cout << st.size() << endl;

    // while (!st.empty())
    // {
    //     cout << st.top() << endl;
    //     st.pop();
    // }

    return 0;
}