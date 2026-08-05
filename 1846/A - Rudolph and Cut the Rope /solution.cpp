#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        int a,b;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            cin>>b;
             if(a>b)
            {
                cnt++;
            }
           
        }
        cout<<cnt<<endl;
     }
    return 0;
}