#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write your code here
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
        int a = *max_element(arr.begin(), arr.end());
        int b = *min_element(arr.begin(), arr.end());
        int ans = a-b;
        cout << ans << endl;
    }
    return 0;
}