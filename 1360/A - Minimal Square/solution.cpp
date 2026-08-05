#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
     int t;
     cin>>t;
     while(t--)
     {
        int a,b;
        cin>>a>>b;
        int x=min(max(2*a,b),max(a,2*b));
        cout<<x*x<<endl;
     }
    return 0;
}