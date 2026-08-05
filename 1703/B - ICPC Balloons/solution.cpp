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
        string s;
        cin>>s;
        int val;
       // s.resize(n);
        int sum=0,res=0;
        int cnt[26]={0};
        for(int i=0;i<n;i++)
        {
            int val=s[i]-'A';
            cnt[val]++;
           
    
        }
        for(int i=0;i<26;i++)
        {
        
            if(cnt[i]!=0)
            {
                if(cnt[i]==1)
                {
                    sum=sum+2;
                }
                if(cnt[i]!=1)
                {
                    sum=sum+cnt[i]+1;
                }
            }
            
           
        }
        cout<<sum<<endl;
        
        
     }
    return 0;
}