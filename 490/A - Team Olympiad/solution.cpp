#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    vector<int> skill1, skill2, skill3;
    vector<int> arr(n);
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) skill1.push_back(i + 1);
        else if (arr[i] == 2) skill2.push_back(i + 1);
        else if (arr[i] == 3) skill3.push_back(i + 1);
    }
 
    int teams = min({skill1.size(), skill2.size(), skill3.size()});
    cout << teams << endl;
 
    for (int i = 0; i < teams; i++) {
        cout << skill1[i] << " " << skill2[i] << " " << skill3[i] << endl;
    }
 
    return 0;
}