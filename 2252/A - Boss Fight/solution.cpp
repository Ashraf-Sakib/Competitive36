#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=0;
        for(auto val: arr){
            sum+=val;
        }
 
        int cnt[1001] = {0};
        for(int i=0;i<n;i++){
            cnt[arr[i]]++;
        }
 
        int mx = 0;
        for(int v=1; v<=1000; v++){
            mx = max(mx, cnt[v]);
        }
 
        int cur = n;
        while(mx > cur/2 + 1){
            for(int v=1; v<=1000; v++){
                if(cnt[v] == mx){
                    cnt[v]--;
                    sum -= v;
                    cur--;
                    break;
                }
            }
            mx = 0;
            for(int v=1; v<=1000; v++){
                mx = max(mx, cnt[v]);
            }
        }
 
        cout<<sum<<endl;
    }
    return 0;
}