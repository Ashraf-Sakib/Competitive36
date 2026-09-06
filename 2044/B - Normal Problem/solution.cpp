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
        string a;
        cin>>a;
        int n=a.size();
        string b=a; // will hold the answer
 
        for(int i=0;i<n;i++){
            char c=a[n-1-i]; // reversed character
            if(c=='p') b[i]='q';
            else if(c=='q') b[i]='p';
            else b[i]='w';
        }
 
        cout<<b<<"
";
     }
    return 0;
}