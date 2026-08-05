#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // Write your code here
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++)
    {
        string temp = s.substr(i, 2);
        mp[temp]++;
    }
    string ans;
    int max = 0;
    for (auto i : mp)
    {
        if (i.second > max)
        {
            max = i.second;
            ans = i.first;
        }
    }
    cout << ans << endl;
    
    return 0;
}