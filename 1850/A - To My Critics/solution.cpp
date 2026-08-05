#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int a, b, c, t;
    cin >> t;
    int f = 0;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a + b >= 10 || b + c >= 10 || c + a >= 10)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}