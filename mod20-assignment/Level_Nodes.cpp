#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

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
        Node* curr = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            curr->left = new Node(l);
            q.push(curr->left);
        }

        if (r != -1) {
            curr->right = new Node(r);
            q.push(curr->right);
        }
    }

    return root;
}

void print_level_X(Node* root, int X) {
    if (!root) {
        cout << "Invalid" << endl;
        return;
    }

    queue<pair<Node*, int>> q;
    q.push({root, 0});
    vector<int> result;

    while (!q.empty()) {
        Node* node = q.front().first;
        int level = q.front().second;
        q.pop();

        if (level == X) {
            result.push_back(node->val);
        }

        if (level > X) break;

        if (node->left) q.push({node->left, level + 1});
        if (node->right) q.push({node->right, level + 1});
    }

    if (result.empty()) {
        cout << "Invalid" << endl;
    } else {
        for (int val : result) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    Node* root = input_tree();

    int X;
    cin >> X;

    print_level_X(root, X);

    return 0;
}
