#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // Write your code here
     int k;
     cin>>k;
        int n=1;
        int sum=0;
        while(sum<=k)
        {
            sum+=n*(n+1)/2;
            n++;
        }
        cout<<n-2<<endl;
    return 0;
}