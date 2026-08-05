#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k;
    cin >> k;
    int arr[12];
    for (int i = 0; i < 12; i++) {
        cin >> arr[i];
    }
 
    if (k == 0) {
        cout << 0 << endl;
        return 0;
    }
 
    sort(arr, arr + 12, greater<int>());
    int sum = 0;
    int months = 0;
 
    for (int i = 0; i < 12; i++) {
        sum += arr[i];
        months++;
        if (sum >= k) {
            cout << months << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}