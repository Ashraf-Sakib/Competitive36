#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() 
{
    ll t;
if (cin >> t) {
    while (t--) {
        ll n, m;
        cin >> n >> m;
 
        vector<ll> arr(n), brr(m);
        for (int i = 0; i < n; i++) cin >> arr[i];
        for (int i = 0; i < m; i++) cin >> brr[i];
 
        ll c1 = arr[0] + (n - 1);
        ll c2 = brr[0] + (m - 1);
 
        if (c2 <= c1) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }
}
return 0;
 
}