#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string arr[n];
        string brr[m];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<m;i++){
            cin>>brr[i];
        }
 
        vector<char> tmp;
        for(auto &s : arr){
            if(!s.empty()){
                tmp.push_back(toupper(s[0]));
            }
        }
 
        bool bt[m];
        for(int i=0;i<m;i++) bt[i]=false;
 
        int cnt = 0;
        bool ch = true;
        while(ch){
            ch = false;
            for(int i=0;i<m;i++){
                if(bt[i]) continue;
                bool good = true;
                for(char c : brr[i]){
                    if(find(tmp.begin(), tmp.end(), c) == tmp.end()){
                        good = false;
                        break;
                    }
                }
                if(good){
                    bt[i] = true;
                    tmp.push_back(brr[i][0]);
                    cnt++;
                    ch = true;
                }
            }
        }
 
        cout << (cnt == m ? "YES" : "NO") << endl;
    }
    return 0;
}