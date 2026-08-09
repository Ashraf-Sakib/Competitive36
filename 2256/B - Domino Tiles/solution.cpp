#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 998244353;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        ll w[2] = {0, 0};
        for(int st = 0; st < 2; st++) {
            bool b0 = false, b1 = false;
            int j = 0;
            for(int p = st; p < n; p += 2, j++) {
                char c = s[p];
                if(c == '?') continue;
                int d = c - '0';
                if(d != j % 2) b0 = true;
                if(d != 1 - j % 2) b1 = true;
            }
            ll x = 0;
            if(!b0) x++;
            if(!b1) x++;
            w[st] = x;
        }
        cout << (w[0] * w[1]) % MOD << "
";
    }
}