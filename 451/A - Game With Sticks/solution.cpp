#include<bits/stdc++.h>
using namespace std;
int main()
{
    // cout<<"hello world"<<endl;
    int n,m;
    cin>>n>>m;
    if(n>m)
    {
        swap(n,m);
    }
    if(n%2==0)
    {
        cout<<"Malvika"<<endl;
    }
    else
    {
        cout<<"Akshat"<<endl;
    }
    return 0;
}