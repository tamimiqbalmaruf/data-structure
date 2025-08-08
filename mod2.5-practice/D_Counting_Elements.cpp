#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int countNum = v[i] + 1;
        auto it = find(v.begin(), v.end(), countNum);
        
        if (it != v.end())
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}