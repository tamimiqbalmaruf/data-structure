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

    vector<int> pre(n);
    pre[0] = v[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i];
    }

    int findIndex = -1;

    for (int i = 0; i < n; i++)
    {
        int leftSum = (i == 0) ? 0: pre[i-1];
        int rightSum = pre[n -1] - pre[i];

        if(leftSum == rightSum){
            findIndex = i;
            break;
        }
    }
    
    cout << findIndex << endl;

    return 0;
}