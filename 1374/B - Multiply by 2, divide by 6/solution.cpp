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
        int cnt2=0;
        int cnt3=0;
        while(n%2==0)
        {
            n=n/2;
            cnt2++;
        }
        while(n%3==0)
        {
            n=n/3;
            cnt3++;
        }
        //cout<<cnt3<<" "<<cnt2<<endl;
        if(n==1 && cnt2<=cnt3)
        {
            cout<<2*cnt3-cnt2<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
     }
    return 0;
}