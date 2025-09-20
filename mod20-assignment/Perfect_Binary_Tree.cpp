#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *left, *right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree(int &total_nodes, int &max_depth) {
    int val;
    cin >> val;

    if (val == -1) return NULL;

    Node* root = new Node(val);
    queue<pair<Node*, int>> q;
    q.push({root, 1});

    total_nodes = 1;
    max_depth = 1;

    while (!q.empty()) {
        Node* current = q.front().first;
        int depth = q.front().second;
        q.pop();

        max_depth = max(max_depth, depth);

        int l, r;
        cin >> l >> r;

        if (l != -1) {
            current->left = new Node(l);
            q.push({current->left, depth + 1});
            total_nodes++;
        }

        if (r != -1) {
            current->right = new Node(r);
            q.push({current->right, depth + 1});
            total_nodes++;
        }
    }

    return root;
}

int main() {
    int total_nodes = 0;
    int max_depth = 0;

    Node* root = input_tree(total_nodes, max_depth);

    int expected_nodes = pow(2, max_depth) - 1;

    if (total_nodes == expected_nodes) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
