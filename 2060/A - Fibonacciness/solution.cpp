#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;
        
        ll v1 = a1 + a2;
        ll v2 = a4 - a2;
        ll v3 = a5 - a4;
        
        ll vals[3] = {v1, v2, v3};
        int ans = 0;
        
        for(int i = 0; i < 3; i++){
            int cnt = 0;
            if(v1 == vals[i]) cnt++;
            if(v2 == vals[i]) cnt++;
            if(v3 == vals[i]) cnt++;
            ans = max(ans, cnt);
        }
        
        cout << ans << endl;
    }
    return 0;
}