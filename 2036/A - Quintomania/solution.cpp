#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        bool f = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(arr[i] - arr[i + 1]) != 5 && abs(arr[i] - arr[i + 1]) != 7)
            {
                f = false;
                break;
            }
        }
 
        if (f)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
 
    return 0;
}