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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int res = 0;
        int tmp[n];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 1)
                tmp[i] = 0;
            else if (arr[i] % 4 == 0)
                tmp[i] = 1;
            else
                tmp[i] = 2;
        }
        int oddCnt = 0, mod0Cnt = 0, mod2Cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (tmp[i] == 0)
                oddCnt++;
            else if (tmp[i] == 1)
                mod0Cnt++;
            else
                mod2Cnt++;
        }
        res = max({oddCnt, mod0Cnt, mod2Cnt});
        cout << res << endl;
    }
    return 0;
}