#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        ll gold = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(a[i] >= k) gold += a[i];
            else if(a[i] == 0 && gold > 0){
                gold--;
                cnt++;
            }
        }
        cout << cnt << "
";
    }
}