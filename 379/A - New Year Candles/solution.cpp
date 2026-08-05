#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Write your code here
    int a, b;
    cin >> a >> b;
    int ans = a;
    while (a >= b)
    {
        int q = a / b;
        ans += q;
        int rem = a % b;
        a = q + rem;
    }
    cout << ans << endl;
    return 0;
}