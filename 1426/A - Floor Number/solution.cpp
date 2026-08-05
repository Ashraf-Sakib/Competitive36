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
        int n,x;
        cin>>n>>x;
        if(n<=2)
        {
            cout<<1<<endl;
        }
        else
        {
            n-=2;
            cout<<1+(n/x)+(n%x!=0)<<endl;
        }
 
     }
    return 0;
}