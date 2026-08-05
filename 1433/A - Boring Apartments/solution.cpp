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
        string x;
        cin>>x;
        int digit=x[0]-'0'-1;
        int len=x.length();
        int ans=digit*10+len*(len+1)/2;
        cout<<ans<<endl;
     }
    return 0;
}