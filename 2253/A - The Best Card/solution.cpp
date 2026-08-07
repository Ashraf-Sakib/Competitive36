#include <bits/stdc++.h>
using namespace std;
 
const int MAXN = 200005;
int mark[MAXN];
 
void sievePrime(int n)
{
    int limit = sqrt(n) + 2;
    mark[1] = 1;
    for (int i = 4; i <= n; i += 2)
    {
        mark[i] = 1;
    }
    for (int i = 3; i <= n; i += 2)
    {
        if (!mark[i] && i <= limit)
        {
            for (int j = i * i; j <= n; j += i * 2)
            {
                mark[j] = 1;
            }
        }
    }
}
 
int main()
{
    sievePrime(MAXN - 1);   
 
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int val = n + 1;
        cout << (!mark[val] ? "YES" : "NO") << endl;
    }
    return 0;
}