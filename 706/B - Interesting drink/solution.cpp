#include <bits/stdc++.h>
using namespace std;
int upper_bound(int arr[], int n, int target)
{
    int l = 0;
    int r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return l;
}
 
int main()
{
 
    // Write your code here
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int ans;
    int q;
    cin >> q;
    int m;
    while (q--)
    {
        cin >> m;
        ans = upper_bound(a, n, m);
        cout << ans << endl;
    }
    return 0;
}