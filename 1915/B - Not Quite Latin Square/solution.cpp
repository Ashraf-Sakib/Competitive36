#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while(t--) {
        string row[3];
        for(int i = 0; i < 3; i++) cin >> row[i];
 
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(row[i][j] == '?') {
                    int sum = 0;
                    for(int k = 0; k < 3; k++) {
                        if(k != j) sum += (row[i][k] - 'A');
                    }
                    char ans = 'A' + (3 - sum);
                    cout << ans << "
";
                }
            }
        }
    }
    return 0;
}