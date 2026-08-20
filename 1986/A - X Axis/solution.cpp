#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3;
        cin>>x1>>x2>>x3;
        
        int mx = max({x1,x2,x3});
        int mn = min({x1,x2,x3});
        
        cout<<(mx-mn)<<"
";
    }
    return 0;
}