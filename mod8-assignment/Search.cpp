#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insertAtTail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int findIndex(Node* head, int x) {
    int index = 0;
    Node* temp = head;
    while (temp != NULL) {
        if (temp->val == x) {
            return index;
        }
        temp = temp->next;
        index++;
    }
    return -1;
}

int main() {
    int T;
    cin >> T;

    for (int t = 0; t < T; t++) {
        Node* head = NULL;
        Node* tail = NULL;
        int val;

        while (cin >> val && val != -1) {
            insertAtTail(head, tail, val);
        }

        int x;
        cin >> x;

        int result = findIndex(head, x);
        cout << result << endl;

    }

    return 0;
}
