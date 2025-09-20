#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    };
};

Node *input_tree()
{
    int val;
    cin >> val;

    Node *root;

    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node *myLeft, *myRight;

        if (l != -1)
            myLeft = new Node(l);
        else
            myLeft = NULL;

        if (r != -1)
            myRight = new Node(r);
        else
            myRight = NULL;

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);

        if (p->right)
            q.push(p->right);
    }

    return root;
}

void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "No Tree" << endl;
        return;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        cout << f->val << " ";

        if (f->left)
            q.push(f->left);

        if (f->right)
            q.push(f->right);
    }
}

void insert(Node *&root, int val)
{
    if (root == NULL)
        root = new Node(val);

    if (val < root->val)
    {
        if (root->left == NULL)
            root->left = new Node(val);

        else
            insert(root->left, val);
    }
    else
    {
        if (root->right == NULL)
            root->right = new Node(val);

        else
            insert(root->right, val);
    }
}

int main()
{

    Node *root = input_tree();
    int val;
    cin >> val;

    insert(root, val);
    level_order(root);

    return 0;
}