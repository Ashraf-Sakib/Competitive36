#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        
        string x, s;
        cin >> x >> s;
        
        int ops = 0;
        while(true){
            if(x.find(s) != string::npos){
                cout << ops << "
";
                break;
            }
            if((int)x.size() >= n + m){
                cout << -1 << "
";
                break;
            }
            x += x;
            ops++;
        }
    }
    return 0;
}