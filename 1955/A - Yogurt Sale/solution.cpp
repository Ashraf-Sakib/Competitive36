#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int ans = n * a;
        if (b < 2 * a)
        {
            ans = (n / 2) * b + (n % 2) * a;
        }
 
        cout << ans << endl;
    }
    return 0;
}