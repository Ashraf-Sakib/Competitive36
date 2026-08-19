#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        int fst=-1, lst=-1;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
                if(fst==-1) fst=i;
                lst=i;
            }
        }
        
        cout<<(lst-fst+1)<<"
";
    }
    return 0;
}