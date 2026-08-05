#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // Write your code here
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int l=0;
        int r=n-1;
        int ans=n;
        while(l<=r && ans>0){
            if(s[l]!=s[r])
            {
                ans=ans-2;
                l++;
                r--;
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
     }
    return 0;
}