#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        int mn = 9;
        int v = x;
        while (v > 0) {
            mn = min(mn, v % 10);
            v /= 10;
        }
        cout << mn << "
";
    }
    return 0;
}