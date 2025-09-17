#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++) {
        int val;
        cin >> val;
        q.push(val);
    }

    if (n != m) {
        cout << "NO" << endl;
        return 0;
    }

    bool same = true;
    while (!st.empty() && !q.empty()) {
        int stackTop = st.top();
        int queueFront = q.front();

        if (stackTop != queueFront) {
            same = false;
            break;
        }

        st.pop();
        q.pop();
    }

    if (same)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}