#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int result = -1;  
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            result &= x;
        }
        cout << result << "
";
    }
    return 0;
}