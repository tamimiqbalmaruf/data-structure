#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mid = n / 2;

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n; j++) {
            if (i == mid && j == mid) {
                cout << "X";
            }
            else if (i < mid && (j == i)) {
                cout << "\\";
            }
            else if (i < mid && (j == n - 1 - i)) {
                cout << "/";
            }
            else if (i > mid && (j == n - 1 - i)) {
                cout << "/";
            }
            else if (i > mid && (j == i)) {
                cout << "\\";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
