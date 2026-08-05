#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7;
vector<int> adj[N];
bool visited[N];
int depth[N];
 
int dfs(int n, int m)
{
    if (n == m)
        return 0;
    if (m > n)
    {
        if (m % 2 == 0)
            return 1 + dfs(n, m / 2);
        else
            return 1 + dfs(n, m + 1);
    }
    else
    {
        return 1 + dfs(n, m + 1);
    }
}
 
int main()
{   
    //Write your code here
    int n, m;
    cin >> n >> m;
 
    int w = dfs(n, m);
 
    cout << w << endl;
    return 0;
}