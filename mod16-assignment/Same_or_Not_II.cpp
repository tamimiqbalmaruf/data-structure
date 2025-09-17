#include <iostream>
using namespace std;

class Stack {
    int arr[1000];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int val) {
        arr[++top] = val;
    }

    int pop() {
        return arr[top--];
    }

    bool isEmpty() {
        return top == -1;
    }
};

class Queue {
    int arr[1000];
    int front, rear;

public:
    Queue() {
        front = 0;
        rear = 0;
    }

    void enqueue(int val) {
        arr[rear++] = val;
    }

    int dequeue() {
        return arr[front++];
    }

    bool isEmpty() {
        return front == rear;
    }
};

int main() {
    int n, m;
    cin >> n >> m;

    Stack st;
    Queue q;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.enqueue(val);
    }

    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }

    bool same = true;

    for (int i = 0; i < n; i++) {
        int s = st.pop();
        int t = q.dequeue();

        if (s != t) {
            same = false;
            break;
        }
    }

    if (same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
