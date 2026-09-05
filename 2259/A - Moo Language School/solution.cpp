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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int ans = 0;
        for (int i = 0; i < n; i = i + k)
        {
            bool flag = false;
            for (int j = i; j < i + k; j++)
            {
                if (str[j] == '0')
                {
                    flag = true;
                    break;
                }
            }
            if (!flag)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
 
    return 0;
}