#include <bits/stdc++.h>
using namespace std;

void printLeftToRight(const list<int>& myList) {
    cout << "L -> ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;
}

void printRightToLeft(const list<int>& myList) {
    cout << "R -> ";
    for (auto it = myList.rbegin(); it != myList.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    int Q;
    cin >> Q;

    list<int> myList;

    for (int i = 0; i < Q; ++i) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            myList.push_front(V);
        }
        else if (X == 1) {
            myList.push_back(V);
        }
        else if (X == 2) {
            if (!myList.empty()) {
                int idx = 0;
                auto it = myList.begin();
                while (it != myList.end()) {
                    if (idx == V) {
                        myList.erase(it);
                        break;
                    }
                    ++it;
                    ++idx;
                }
            }
        }

        printLeftToRight(myList);
        printRightToLeft(myList);
    }

    return 0;
}
