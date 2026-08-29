#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    
    int lo = max(a + 1, n - b);
    int hi = n;
    
    int ans = hi - lo + 1;
    if (ans < 0) ans = 0;
    
    cout << ans << endl;
    
    return 0;
}