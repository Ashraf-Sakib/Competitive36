#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
 
        int result = ((n - y) / x) * x + y;
        if (result > n)
        {
            result -= x;
        }
 
        cout << result << endl;
    }
    return 0;
}