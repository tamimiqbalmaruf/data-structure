#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    // vector<int> v2;

    // v2 = v;

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // v.pop_back();

    // vector<int> v2 = {100, 200, 300};
    // v.insert(v.begin() + 2, 100);
    // v.insert(v.begin() + 2, v2.begin(), v2.end());

    // v.erase(v.begin()+2);
    // v.erase(v.begin()+2,v.end());

    // replace(v.begin(),v.end(), 2, 100);

    // vector<int>::iterator it = find(v.begin(), v.end(), 100);
    // auto it = find(v.begin(), v.end(), 6);

    // if (it == v.end())
    // {
    //     cout << "Not Found";
    // }
    // else
    // {
    //     cout << "Found";
    // }

    // cout << *it << endl;

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    // element access
    // cout << v[3] << endl;
    // cout << v.at(3) << endl;
    // cout << v.back() << endl;
    // cout << v.font() << endl;

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}