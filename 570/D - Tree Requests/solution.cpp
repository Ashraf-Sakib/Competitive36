#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>> adj(n+1);
    for(int i=2;i<=n;i++){
        int p; cin>>p;
        adj[p].push_back(i);
    }
    
    string s;
    cin>>s;
    
    vector<int> depth(n+1), tin(n+1), tout(n+1);
    depth[1]=1;
    int timer=0;
    
    vector<int> idx(n+1,0);
    vector<int> st; st.push_back(1);
    tin[1]=timer++;
    
    while(!st.empty()){
        int u=st.back();
        if(idx[u] < (int)adj[u].size()){
            int v=adj[u][idx[u]++];
            depth[v]=depth[u]+1;
            tin[v]=timer++;
            st.push_back(v);
        } else {
            tout[u]=timer-1;
            st.pop_back();
        }
    }
    
    vector<vector<pair<int,char>>> byDepth(n+2);
    for(int v=1;v<=n;v++){
        byDepth[depth[v]].push_back({tin[v], s[v-1]});
    }
    
    vector<vector<int>> tins(n+2);
    vector<vector<int>> prefMask(n+2);
    
    for(int h=1;h<=n;h++){
        sort(byDepth[h].begin(), byDepth[h].end());
        int sz=byDepth[h].size();
        tins[h].resize(sz);
        prefMask[h].resize(sz+1,0);
        for(int i=0;i<sz;i++){
            tins[h][i]=byDepth[h][i].first;
            int bit = 1<<(byDepth[h][i].second-'a');
            prefMask[h][i+1] = prefMask[h][i] ^ bit;
        }
    }
    
    string result;
    for(int q=0;q<m;q++){
        int v,h;
        cin>>v>>h;
        
        if(h>n || byDepth[h].empty()){
            result += "Yes
";
            continue;
        }
        
        int lo = lower_bound(tins[h].begin(), tins[h].end(), tin[v]) - tins[h].begin();
        int hi = upper_bound(tins[h].begin(), tins[h].end(), tout[v]) - tins[h].begin();
        
        if(lo>=hi){
            result += "Yes
";
            continue;
        }
        
        int mask = prefMask[h][hi] ^ prefMask[h][lo];
        int cnt = __builtin_popcount(mask);
        
        result += (cnt<=1 ? "Yes
" : "No
");
    }
    
    cout<<result;
    return 0;
}