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
        vector<int> p(4);
        for (int i = 0; i < 4; i++)
        {
            cin >> p[i];
        }
        int cnt = 0;
        for (int i = 0; i < 4; i++)
        {
            if (p[i] > p[0])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}