#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
     string str="codeforces";
     int t;
     cin>>t;
     while(t--){
        char ch;
        cin>>ch;
        if(str.find(ch)==-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
     }
    return 0;
}