#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b || b == c || a == c)
        {
            cout << 0 << endl;
            continue;
        }
        int x = min({a, b, c});
        int z = max({a, b, c});
        int y = a + b + c - x - z; 
        cout << min(z - y, y - x) << endl;
    }
    return 0;
}