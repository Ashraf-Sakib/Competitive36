#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = arr[i] + k;
        if (arr[i] <= 5) {
            cnt++;
        }
    }
 
    int ans = cnt / 3;
    cout << ans << endl;
 
    return 0;
}