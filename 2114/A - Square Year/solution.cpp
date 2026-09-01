#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = stoi(s);
        
        int k = (int) round(sqrt((double)n));
        while (k > 0 && k*k > n) k--;
        while ((k+1)*(k+1) <= n) k++;
        
        if (k*k == n){
            cout << 0 << " " << k << "
";
        } else {
            cout << -1 << "
";
        }
    }
    return 0;
}