#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {20, 30, 10, 50, 30, 100, 60, 10};

    // int headValue = l.front();
    // int tailValue = l.back();

    // cout << headValue << " " << tailValue << endl;

    // int ithElement = *next(l.begin(), 5); // return pointer, dereference need for accessing value

    // cout << ithElement << endl;

    cout << *l.begin() << endl;

    return 0;
}