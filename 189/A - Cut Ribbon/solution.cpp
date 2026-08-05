#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    int pieces = 0;
    for (int i = 0; i * a <= n; i++)
    {
        for (int j = 0; i * a + j * b <= n; j++)
        {
            int k = (n - i * a - j * b) / c;
            if (i * a + j * b + k * c == n)
            {
                pieces = max(i + j + k, pieces);
            }
        }
    }
    cout << pieces << endl;
    return 0;
}