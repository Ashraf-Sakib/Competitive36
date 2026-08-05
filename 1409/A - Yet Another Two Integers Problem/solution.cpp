#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
     int t;
     cin>>t;
     while(t--)
     {
        int a,b;
        int d=0,div = 0,mod = 0;
        int cnt=0;
        cin>>a>>b;
        if(a>b)
        swap(a,b);
        d = b - a;
        div = d / 10;
        mod = d % 10;
        cnt = div;
        if(mod > 0){
            cnt++;
        }
        
        cout<<cnt<<endl;
     }
    return 0;
}