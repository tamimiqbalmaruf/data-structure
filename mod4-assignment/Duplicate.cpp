#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    bool hasDuplicate = false;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1]) {
            hasDuplicate = true;
            break;
        }
    }

    if (hasDuplicate) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}