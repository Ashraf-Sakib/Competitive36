#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
     int n,m,ans;
     cin>>n>>m;
     vector<int>f;
     for(int i=0;i<m;i++)
     {
        int x;
        cin>>x;
        f.push_back(x);
     }
     sort(f.begin(),f.end());
     ans=f[n-1]-f[0];
     for(int i=1;i<=m-n;i++)
     {
        if(ans>f[n-1+i]-f[i])
        {
            ans=f[n-1+i]-f[i];
        }
     }
     cout<<ans<<endl;
 
    return 0;
}