#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int>adj[N];
bool visited[N];
int depth[N];
void dfs(int u)
{
    visited[u]=true;
    for(int v:adj[u])
    {
        if(visited[v])continue;
        depth[v]=depth[u]+1;
        dfs(v);
    }
}
 
int main()
{
 
    // Write your code here
     int n,t;
     cin>>n>>t;
     for(int i=1;i<=n-1;i++)
     {
        int u;
        cin>>u;
        adj[i].push_back(u+i);
     }
     dfs(1);
     if(visited[t])
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
    return 0;
}