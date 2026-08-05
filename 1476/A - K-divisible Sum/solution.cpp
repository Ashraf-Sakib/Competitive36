#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    // Write your code here
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, k;
        cin >> n >> k;
 
        if (n <= k)
        {
            cout << (k + n - 1) / n << endl;
        }
        else
        {
            cout << (n % k > 0 ? 2 : 1) << endl;
        }
    }
 
    return 0;
}