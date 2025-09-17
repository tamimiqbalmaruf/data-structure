#include <bits/stdc++.h>
using namespace std;

bool isValidString(const string& s) {
    stack<char> st;

    for (char ch : s) {
        if (!st.empty() && st.top() != ch) {
            st.pop();
        } else {
            st.push(ch);
        }
    }

    return st.empty();
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if (isValidString(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}