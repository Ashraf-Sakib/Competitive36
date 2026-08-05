#include <iostream>
#include <vector>
using namespace std;
 
const int MAXN = 1e5 + 3;
 
int m;
vector<int> hasCat(MAXN);
vector<vector<int>> adjList(MAXN);
int ans = 0;
 
void dfs(int u, int par = 0, int cats = 0)
{
    if (hasCat[u])
        cats++;
    else
        cats = 0;
 
    if (cats > m)
        return;
 
    bool isLeaf = true;
 
    for (int v : adjList[u])
    {
        if (v != par)
        {
            dfs(v, u, cats);
            isLeaf = false;
        }
    }
 
    if (isLeaf)
        ans++;
}
 
int main()
{
    int n;
    cin >> n >> m;
 
    for (int i = 1; i <= n; ++i)
    {
        cin >> hasCat[i];
    }
 
    for (int i = 1; i < n; ++i)
    {
        int u, v;
        cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
 
    dfs(1);
 
    cout << ans << endl;
 
    return 0;
}