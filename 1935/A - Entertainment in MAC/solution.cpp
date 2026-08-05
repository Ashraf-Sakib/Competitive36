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
     string str;
     cin>>str;
     string ctr=str;
     reverse(ctr.begin(),ctr.end());
     if(str<=ctr)
     {
        cout<<str<<endl;
     }
     else
     {
        cout<<ctr<<str<<endl;
     }
    }
    return 0;
}