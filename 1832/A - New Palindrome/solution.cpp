#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    //bool flag = false;
    while (t--)
    {
        string s;
        cin >> s;
        s = s.substr(0, s.size() / 2);
        int k = unique(s.begin(), s.end()) - s.begin();
        if (k == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}