#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, m;
        cin >> n >> m;
        char arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        vector<int> r_cnt(n, 0);
        vector<int> c_cnt(m, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (arr[i][j] == '#')
                {
                    r_cnt[i]++;
                    c_cnt[j]++;
                }
            }
        }
        int max_r = 0;
        int max_ri = -1;
        for (int i = 0; i < n; i++)
        {
            if (r_cnt[i] > max_r)
            {
                max_r = r_cnt[i];
                max_ri = i;
            }
        }
        int max_c = 0;
        int max_ci = -1;
        for (int j = 0; j < m; j++)
        {
            if (c_cnt[j] > max_c)
            {
                max_c = c_cnt[j];
                max_ci = j;
            }
        }
        cout << max_ri + 1 << " " << max_ci + 1 << endl;
    }
 
    return 0;
}