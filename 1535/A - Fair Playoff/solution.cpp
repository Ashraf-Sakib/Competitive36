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
        vector<int> v(4);
        for(int i=0;i<4;i++)
        {
            cin>>v[i];
        }
        int a=max(v[0],v[1]);
        int b=max(v[2],v[3]);
        sort(v.begin(),v.end());
        if((a==v[2] && b==v[3]) || (a==v[3] && b==v[2]))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}