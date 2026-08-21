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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int l = 1;
        int curr = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                curr++;
            }
            else
            {
                curr = 1;
            }
            l = max(curr, l);
        }
 
        cout << l + 1 << endl;
    }
    return 0;
}