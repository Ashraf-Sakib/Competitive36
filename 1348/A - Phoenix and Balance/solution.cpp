#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 0;
        for (int i = 1; i <= n / 2 - 1; i++)
        {
            a += pow(2, i);
        }
        int b = 0;
        for (int i = n / 2; i <= n - 1; i++)
        {
            b = b + pow(2, i);
        }
        int ans = pow(2, n) + a - b;
        cout<<ans<<endl;
    }
    return 0;
}