#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        ll a, b, n;
        cin >> a >> b >> n;
        int ops = 0;
        while(a <= n && b <= n){
            if(a < b) a += b;
            else b += a;
            ops++;
        }
        cout << ops << "
";
    }
}