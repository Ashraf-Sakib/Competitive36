#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
     int n,k,l,c,d,p,nl,np;
     cin>>n>>k>>l>>c>>d>>p>>nl>>np;
     int x=k*l/nl;
     int y=c*d;
     int z=p/np;
     int ans=min(min(x,y),z);
     cout<<ans/n<<endl;
    return 0;
}