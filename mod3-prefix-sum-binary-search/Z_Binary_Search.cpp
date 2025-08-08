#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    while (q--)
    {
        int x;
        cin >> x;
        int flag = 0;

        int l = 0, r = n - 1;

        while (l <= r)
        {

            int mid = (l + r) / 2;

            if (x == a[mid])
            {
                flag = 1;
                break;
            }
            else if (x > a[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        flag ? cout << "found" << endl : cout << "not found" << endl;
    }

    return 0;
}