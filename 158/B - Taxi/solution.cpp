#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
     int n;
     cin>>n;
     vector<int>a;
     for(int i=0;i<n;i++)
     {
        int x;
        cin>>x;
        a.push_back(x);
     }
     int count[5]={0};
     for(int i=0;i<a.size();i++)
     {  
        int val=a[i];
        count[val]++;
     }
     int ans=0;
     ans=ans+count[4]+count[2]/2;
        ans=ans+count[3];
        count[1]=count[1]-count[3];
     if(count[2]%2==1)
     {
        ans=ans+1;
        count[1]=count[1]-2;
     }
     if(count[1]>0)
     {
        ans=ans+(count[1]+3)/4;
     }
      cout<<ans;
     return 0;
}