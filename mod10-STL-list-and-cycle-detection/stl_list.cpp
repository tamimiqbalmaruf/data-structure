#include <bits/stdc++.h>
using namespace std;

int main()
{
    // list<int> l;

    // list<int> l(10);

    // list<int> l(10, 3);
    // cout << *l.begin() << endl;

    // for(auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    list<int> l = {1, 2, 3, 4, 5};
    // list<int> l2(l); // copy list from l to l2

    // int a[3] = {10, 20, 30};
    // list<int> l2(a, a+3); // copy array

    // vector<int> v = {40, 50, 60};
    // list<int> l2(v.begin(), v.end()); // copy array

    // l.clear(); // clear list

    l.size(); // list size

    l.empty() ? cout << "empty" : cout << "not empty" << endl; // empty check

    // l.resize(2); // list resize into 2 size
    // l.resize(10); // list resize into 10 size
    l.resize(10, 100); // list resize into 10 size, other val 100

    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}