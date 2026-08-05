#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while(t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n), b(n);
 
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
 
        if(k >= 2) {
            cout << "YES
";
        }
        else {
            // k == 1 → must already be sorted
            bool ok = true;
            for(int i = 1; i < n; i++) {
                if(a[i] < a[i-1]) {
                    ok = false;
                    break;
                }
            }
 
            cout << (ok ? "YES
" : "NO
");
        }
    }
 
    return 0;
}