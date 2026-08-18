#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t;
    cin >> t;
    vector<ll> v;
    for(ll p=1; p<=1000000; p*=10)
        for(int d=1; d<=9; d++)
            v.push_back(d*p);
    sort(v.begin(), v.end());
    while(t--){
        ll n;
        cin >> n;
        int cnt = upper_bound(v.begin(), v.end(), n) - v.begin();
        cout << cnt << "
";
    }
}