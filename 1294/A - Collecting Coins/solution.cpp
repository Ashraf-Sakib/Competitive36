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
        int a, b, c, n;
        cin >> a >> b >> c >> n;
 
        int max_val = max({a, b, c});
        int needed = (max_val - a) + (max_val - b) + (max_val - c);
 
        if (n >= needed && (n - needed) % 3 == 0)
        {
            cout << "YES
";
        }
        else
        {
            cout << "NO
";
        }
    }
 
    return 0;
}