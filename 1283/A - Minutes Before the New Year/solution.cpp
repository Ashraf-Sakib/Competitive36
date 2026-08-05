#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // Write your code here
     int t;
     cin>>t;
        while(t--)
        {
            int h,m;
            cin>>h>>m;
            int ans = 24*60 - (h*60 + m);
            cout<<ans<<endl;
        }
    return 0;
}