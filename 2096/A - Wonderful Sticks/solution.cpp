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
        int l=1;
        int r=n;
        vector<int>ans(n);
        for(int i=n-2;i>=0;i--){
            if(s[i]=='<')
            {
                ans[i+1]=l;
                l++;
            }
            if(s[i]=='>'){
                ans[i+1]=r;
                r--;
            }
        }
        ans[0]=l;
        for(auto val: ans)
        {
            cout<<val<<" ";
        }
        cout<<endl;
 
     }
    return 0;
}