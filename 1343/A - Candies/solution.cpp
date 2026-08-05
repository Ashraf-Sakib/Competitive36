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
        int k = 2;
        int ans ;
        while (k <= 30)
        {
            if ((n% ((1 << k)-1) == 0))
            {
                ans = n / ((1 << k)-1);
                break;
            }
            k++;
        }
        cout << ans << endl;
    }
    return 0;
}