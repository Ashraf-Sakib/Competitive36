#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
     int n;
     cin>>n;
     int arr[n];
     int ans=0;
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }
     sort(arr,arr+n);
     int m;
     cin>>m;
     int brr[m];
     for(int i=0;i<m;i++)
     {
        cin>>brr[i];
     }
     sort(brr,brr+m);
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<m;j++)
        {
            if(abs(arr[i]-brr[j])<=1)
            {
                brr[j]=1000;
                ans++;
                break;
            }
        }
     }
     cout<<ans<<endl;
    return 0;
}