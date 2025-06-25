#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};
    vector<int> v3 = {100, 200, 300};

    // vector<int> v2;

    // v2 = v;

    // v2.pop_back();

    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }

    // v.insert(v.begin()+2, 100);
    // v.insert(v.begin()+2, v3.begin(), v3.end());


    // v.erase(v.begin()+2);

    v.erase(v.begin()+1, v.end()-1);

    for(int x: v){ // ranged based for loop
        cout << x << " ";
    }
    
    return 0;
}