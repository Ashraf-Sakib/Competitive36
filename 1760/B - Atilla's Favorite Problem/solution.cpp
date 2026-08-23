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
        char mx = s[0];
        for (char c : s)
        {
            mx = max(mx, c);
        }
 
        cout << (mx - 'a' + 1) << endl;
    }
    return 0;
}