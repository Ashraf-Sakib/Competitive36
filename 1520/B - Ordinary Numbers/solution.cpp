#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
 
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a = 0;
        for (ll k = 1; k <= n; k = k * 10 + 1)
        {
            for (int i = 1; i <= 9; i++)
            {
                if (k * i <= n)
                {
                    a++;
                }
            }
        }
        cout << a << endl;
    }
 
    return 0;
}