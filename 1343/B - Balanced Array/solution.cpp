#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Write your code here
    int t;
    cin >> t;
    vector<int> ans;
    while (t--)
    {
        int n;
        cin >> n;
        long long  sum = 0;
        long long newSum = 0;
 
        if (n % 2 != 0 || n % 4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 2; i <= n; i = i + 2)
            {
                ans.push_back(i);
                sum += i;
            }
 
            for (int i = 1; i < n - 2; i = i + 2)
            {
                ans.push_back(i);
                newSum += i;
            }
 
            int k = abs(newSum - sum);
            ans.push_back(k);
            for (int x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
            ans.clear();
        }
    }
    return 0;
}