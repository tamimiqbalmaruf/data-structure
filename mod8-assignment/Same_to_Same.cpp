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

bool areListsSame(Node* head1, Node* head2) {
    while (head1 != NULL && head2 != NULL) {
        if (head1->val != head2->val) {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    if (head1 != NULL || head2 != NULL) {
        return false;
    }

    return true;
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;

    while (cin >> val && val != -1) {
        insertAtTail(head1, tail1, val);
    }

    while (cin >> val && val != -1) {
        insertAtTail(head2, tail2, val);
    }

    if (areListsSame(head1, head2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
