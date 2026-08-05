#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                if (t[i] != 'R')
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                if (t[i] == 'R')
                {
                    flag = false;
                    break;
                }
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
 
    return 0;
}