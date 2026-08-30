#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, s;
        cin >> n >> s;
        vector<int> x(n);
        for(int i = 0; i < n; i++) cin >> x[i];
        
        ll L = min((ll)s, (ll)x[0]);
        ll R = max((ll)s, (ll)x[n-1]);
        
        ll left = s - L;
        ll right = R - s;
        
        ll ans = min(2*left + right, 2*right + left);
        
        cout << ans << endl;
    }
    return 0;
}