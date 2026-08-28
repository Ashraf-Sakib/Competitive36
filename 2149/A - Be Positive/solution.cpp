#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cntZero=0, cntNeg=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==0) cntZero++;
            if(x==-1) cntNeg++;
        }
        int ans = cntZero + (cntNeg%2==1 ? 2 : 0);
        cout<<ans<<"
";
    }
    return 0;
}