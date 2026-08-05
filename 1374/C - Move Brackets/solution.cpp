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
        string str;
        cin>>n>>str;
        int ans=0;
        int b=0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='(')
            {
                b++;
 
            }
            else{
                b--;
                if(b<0)
                {
                    b=0;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
     }
    return 0;
}