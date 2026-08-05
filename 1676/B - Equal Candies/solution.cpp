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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int min_val = *min_element(a.begin(), a.end());
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += (a[i] - min_val);
        }
        cout << sum << endl;
    }
    return 0;
}