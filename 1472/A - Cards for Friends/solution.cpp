#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        int cnt = 1;
        while (w % 2 == 0 || h % 2 == 0)
        {
            if (w % 2 == 0)
            {
                w = w / 2;
                cnt *= 2;
            }
            if (h % 2 == 0)
            {
                h = h / 2;
                cnt *= 2;
            }
        }
 
        if (cnt >= n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}