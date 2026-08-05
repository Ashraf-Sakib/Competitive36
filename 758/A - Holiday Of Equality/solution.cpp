#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // Write your code here
     int n;
     cin>>n;
     int ans=0;
     vector<int>arr(n);
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }
     int max=*max_element(arr.begin(),arr.end());
     for(int i=0;i<n;i++)
     {
        ans=ans+(max-arr[i]);
     }
     cout<<ans<<endl;
    return 0;
}