#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
     int k,r;
     cin>>k>>r;
     for(int i=1;i<=10;i++)
     {
        if((k*i)%10==0)
        {
            cout<<i<<endl;
            break;
        }
        else if((k*i-r)%10==0)
        {
            cout<<i<<endl;
            break;
        }
        
     }
    return 0;
}