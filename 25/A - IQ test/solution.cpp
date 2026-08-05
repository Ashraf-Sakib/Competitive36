#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
     int n;
     cin>>n;
     //vector<int>v;
     int even=0;
     int a(0),b(0);
     for(int i=1;i<=n;i++)
     {
        int x;
        cin>>x;
       // v.push_back(x);
        if(x%2==0)
        {
            even++;
            a=i;
 
        }
        else
        {
            even-=1;
            b=i;
        }
     }
     if(even>0)
     cout<<b<<endl;
     else
     cout<<a<<endl;
     
    return 0;
}