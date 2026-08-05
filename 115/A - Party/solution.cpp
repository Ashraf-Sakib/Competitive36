#include <bits/stdc++.h>
using namespace std;
 
vector<int> adj[100005];
int dp[100005];
 
int dfs(int u)
{
    if (dp[u] != -1)
        return dp[u];
 
    int max_len = 0;
    for (int v : adj[u])
    {
        max_len = max(max_len, dfs(v) + 1);
    }
 
    return dp[u] = max_len;
}
 
int main()
{
    // Write your code here
    int ans = 0, n;
    cin >> n;
 
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x != -1)
        {
            adj[x].push_back(i);
        }
    }
 
    memset(dp, -1, sizeof(dp));
 
    for (int i = 1; i <= n; i++)
    {
        if (dp[i] == -1)
        {
            ans = max(ans, dfs(i));
        }
    }
 
    cout << ans + 1 << endl;
 
    return 0;
}