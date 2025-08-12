#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 20, 60, 70};
    // list<int> l2;

    // l2 = l;
    // l2.assign(l.begin(), l.end());

    // l.push_back(100);
    // l.push_front(100);

    // l.pop_back();
    // l.pop_front();

    // l.insert(next(l.begin(), 3),35); // insert at any pos

    // list<int> l3 = {100, 200};
    // l.insert(next(l.begin(), 2), l3.begin(), l3.end()); // insert at any pos multiple value from list

    // vector<int> v = {500, 600};
    // l.insert(next(l.begin(), 2), v.begin(), v.end()); // insert at any pos multiple value from vector

    // l.erase(next(l.begin(), 2)); // delete at any pos

    // l.erase(next(l.begin(), 2), next(l.begin(), 5)); // delete at any pos multiple value

    // replace(l.begin(), l.end(), 20, 100);

    auto it = find(l.begin(), l.end(), 20);

    if(it == l.end()){
        cout << "Not found" << endl;
    }else{
        cout << "Found" << endl;
    }

    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}