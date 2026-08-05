#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    string str;
    cin >> str;
    int n = str.length();
    vector<int> dp(n + 1, 0);
    int m;
    cin >> m;
    int cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (str[i] == str[i - 1])
        {
            cnt++;
        }
        dp[i] = cnt;
    }
    while (m--)
    {
        int l, r;
        cin >> l >> r;
        cout << dp[r - 1] - dp[l - 1] << endl;
    }
    return 0;
}