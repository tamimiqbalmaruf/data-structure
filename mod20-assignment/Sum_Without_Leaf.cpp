#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left;
    Node *right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;

    Node *root = nullptr;
    if (val != -1) {
        root = new Node(val);
    } else {
        return nullptr;
    }

    queue<Node *> q; 
    q.push(root);

    while (!q.empty()) {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            p->left = new Node(l);
            q.push(p->left);
        } else {
            p->left = nullptr;
        }

        if (r != -1) {
            p->right = new Node(r);
            q.push(p->right);
        } else {
            p->right = nullptr;
        }
    }

    return root;
}

int sumNonLeafNodes(Node* root) {
    if (root == nullptr) return 0;

    int sum = 0;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        if (node->left || node->right) {
            sum += node->val;
        }

        if (node->left) {
            q.push(node->left);
        }
        if (node->right) {
            q.push(node->right);
        }
    }

    return sum;
}

int main() {
    Node* root = input_tree();

    int result = sumNonLeafNodes(root);
    cout << result << endl;

    return 0;
}
