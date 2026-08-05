#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int n, m, ans;
 
    cin >> n >> m;
    int a[n], s[n];
 
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
 
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] > m)
            continue;
 
        int l = i, r = n + 1;
        while (l < r)
        {
            int mid = (l + r) / 2;
 
            if (s[mid] - s[i - 1] <= m)
                l = mid + 1;
            else
                r = mid;
        }
 
        ans = max(ans, l - i);
    }
 
    cout << ans << endl;
    return 0;
}