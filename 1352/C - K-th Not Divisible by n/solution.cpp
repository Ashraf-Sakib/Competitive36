#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    int n, k;
    while (t--)
    {
        cin >> n >> k;
        int l = 1;
        int r = 2 * k;
        while (l <= r)
        {
            int mid = l + (r - l) / 2; 
            if ((mid - (mid / n)) >= k)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        cout << l << endl;
    }
    return 0;
}