#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
            continue;
        }
        int d, ans;
        if (b > a)
        {
            d = b - a;
            if (d % 2 == 1)
            {
                ans = 1;
            }
            else
            {
                ans = 2;
            }
        }
        else
        {
            d = a - b;
            if (d % 2 == 0)
            {
                ans = 1;
            }
            else
            {
                ans = 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}