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
        vector<int> ans(n);
 
        int left = 0;
        int right = n - 1;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                ans[i] = arr[left++];
            }
            else
            {
                ans[i] = arr[right--];
            }
        }
        for (int val : ans)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}