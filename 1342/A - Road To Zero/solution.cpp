#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;
        long long a, b;
        cin >> a >> b;
        b = min(b, a + a);
        if (x < y)
        {
            swap(x, y);
        }
        cout << y * b + (x - y) * a << endl;
    }
    return 0;
}