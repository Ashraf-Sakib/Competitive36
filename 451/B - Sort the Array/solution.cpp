#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int n;
    cin >> n;
    vector<int> a(n+1), b(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin()+1, b.end());
    int l = 1, r = n;
    while(l <= n && a[l] == b[l]) l++;
    while(r >= 1 && a[r] == b[r]) r--;
    if(l > r){
        cout << "yes" << endl << 1 << " " << 1 << endl;
        return 0;
    }
    reverse(a.begin()+l, a.begin()+r+1);
    if(a == b) cout << "yes" << endl << l << " " << r << endl;
    else cout << "no" << endl;
    return 0;
}