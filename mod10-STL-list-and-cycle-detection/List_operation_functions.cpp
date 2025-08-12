#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {20, 30, 10, 50, 30, 60, 60, 10};

    // l.remove(60); // remove a specific value

    // l.sort(); // acceding sort
    // l.sort(greater<int>()); // defending sort

    // l.unique(); // remove duplicates, must sort value

    l.reverse();

    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}