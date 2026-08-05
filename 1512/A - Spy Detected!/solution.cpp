#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        int idx = -1;
 
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && i < n - 1 && arr[i] != arr[i - 1] && arr[i] != arr[i + 1])
            {
                idx = i + 1;
                break;
            }
            if (i == 0 && arr[i] != arr[i + 1])
            {
                idx = i + 1;
                continue;
            }
            if (i == n - 1 && arr[i] != arr[i - 1])
            {
                idx = i + 1;
                break;
            }
        }
 
        if (idx != -1)
        {
            cout << idx << endl;
        }
    }
 
    return 0;
}