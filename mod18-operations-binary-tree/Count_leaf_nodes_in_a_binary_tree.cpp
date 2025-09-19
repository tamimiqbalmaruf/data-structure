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

int countLeafNodes(Node *root)
{
    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
        return 1;

    int l = countLeafNodes(root->left);
    int r = countLeafNodes(root->right);

    return l + r;
}

int main()
{
    Node *root = input_tree();
    cout << countLeafNodes(root) << endl;

    return 0;
}