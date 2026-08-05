#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string str;
    cin >> str;
    string ans;
 
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '.')
        {
            ans += '0';
        }
        else if (str[i] == '-' && i + 1 < str.length() && str[i + 1] == '.')
        {
            ans += '1';
            i++; 
        }
        else if (str[i] == '-' && i + 1 < str.length() && str[i + 1] == '-')
        {
            ans += '2';
            i++; 
        }
    }
 
    cout << ans << endl;
    return 0;
}