#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int n, m;
    cin >> n >> m;
    long long t = 0;
    int l = 1;
    int a;
    while (m--)
    {
        cin >> a;
        if (a >=l)
        {
 
            t += a - l;
        }
        else
        {
            t += n -l+a;
           
        }
         l=a;
        
    }
    cout<<t<<endl;
    return 0;
}