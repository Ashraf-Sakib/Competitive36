#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // Write your code here
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        if(n%4==0){
            cout<<n/4<<endl;
        }
        if(n%4==2){
            cout<<(n/4)+1<<endl;
        }
 
     }
    return 0;
}