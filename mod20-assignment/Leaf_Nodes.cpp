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

    if (val == -1) return NULL;

    Node* root = new Node(val);
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            p->left = new Node(l);
            q.push(p->left);
        }
        if (r != -1) {
            p->right = new Node(r);
            q.push(p->right);
        }
    }

    return root;
}

vector<int> getLeafNodes(Node* root) {
    vector<int> leaves;
    if (!root) return leaves;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        if (!p->left && !p->right) {
            leaves.push_back(p->val);
        }

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }

    return leaves;
}

int main() {

    Node* root = input_tree();

    vector<int> leafNodes = getLeafNodes(root);

    sort(leafNodes.rbegin(), leafNodes.rend());

    for (int val : leafNodes) {
        cout << val << " ";
    }

    return 0;
}
