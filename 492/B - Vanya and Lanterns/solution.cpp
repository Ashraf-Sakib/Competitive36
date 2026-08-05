#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
     int l,n,d;
     cin>>n>>l;
     int a[n];
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
     sort(a,a+n);
     d=max(a[0],l-a[n-1])*2;
     for(int i=0;i<n-1;i++)
     {
        d=max(d,a[i+1]-a[i]);
     }
     cout<<fixed<<setprecision(10)<<d/2.0;
    return 0;
}