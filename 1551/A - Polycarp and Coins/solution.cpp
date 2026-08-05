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
        int n;
        cin>>n;
        int a=0,b=0;
        if(n%3==0)
        {
            a=n/3;
            b=n/3;
        }
        else if(n%3==1)
        {
            a=n/3+1;
            b=n/3;
        }
        else
        {
            a=n/3;
            b=n/3+1;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}