#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    cin >> n >> m;
    bool isColor = false;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
 
            if (c != 'B' && c != 'W' && c != 'G')
            {
                isColor = true;
            }
        }
    }
 
    if (isColor)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
 
    return 0;
}