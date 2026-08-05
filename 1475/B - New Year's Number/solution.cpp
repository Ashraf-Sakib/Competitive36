#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int y = n % 2020;
        int x = (n - y) / 2020 - y;
        if (x >= 0 && x * 2020 + y * 2021 == n)
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