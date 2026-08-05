#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
 
        bool possible = true;
        for (char c = 'A'; c <= 'Z'; c++)
        {
            int first = n;
            int last = -1;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == c)
                {
                    first = min(first, i);
                    last = max(last, i);
                }
            }
            for (int i = first; i <= last; i++)
            {
                if (s[i] != c)
                {
                    possible = false;
                    break;
                }
            }
            if (!possible)
            {
                break;
            }
        }
 
        if (possible)
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