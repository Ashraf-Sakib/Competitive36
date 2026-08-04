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
        string s;
        cin >> s;
 
        vector<pair<char, int>> arr;
        for (int i = 0; i < n; i++)
        {
            if (!arr.empty() && arr.back().first == s[i])
            {
                arr.back().second++;
            }
            else
            {
                arr.push_back({s[i], 1});
            }
        }
 
        int m = arr.size();
        int b = 0;
 
        for (int i = 1; i < m - 1; i++)
        {
            if (arr[i].second != 1)
                continue;
            int d = (arr[i - 1].first == arr[i + 1].first) ? 2 : 1;
            b = max(b, d);
        }
 
        cout << m - b << endl;
    }
    return 0;
}