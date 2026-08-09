#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll arr[3]={a,b,c};
        sort(arr,arr+3);
        ll x=arr[0], y=arr[1], z=arr[2];
        if(z <= x+y) cout << z-x << "
";
        else cout << y << "
";
    }
    return 0;
}