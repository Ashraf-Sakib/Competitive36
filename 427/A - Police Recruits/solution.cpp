#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int n;
    cin >> n;
    int x;
    int p = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == -1)
        {
            if (p > 0)
            {
                p--;
            }
            else
            {
                cnt++;
            }
        }
        else
        {
            p = p + x;
        }
    }
 
    cout << cnt << endl;
    return 0;
}