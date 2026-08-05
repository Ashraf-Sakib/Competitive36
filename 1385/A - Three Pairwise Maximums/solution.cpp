#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
 
        // Find a, b, c such that:
        // x = max(a, b)
        // y = max(a, c)
        // z = max(b, c)
 
        int a, b, c;
 
        a = min(x, y);
        b = min(x, z);
        c = min(y, z);
 
        if (max(a, b) == x && max(a, c) == y && max(b, c) == z)
        {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}