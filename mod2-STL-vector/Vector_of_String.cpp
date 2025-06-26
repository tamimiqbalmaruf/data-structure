#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i]; // getline(cin, v[i]) if I use space and should use cin.ignore()
    }

    for(string s : v){
        cout <<s << endl;
    }
    
    return 0;
}