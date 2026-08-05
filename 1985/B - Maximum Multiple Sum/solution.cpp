#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int y = 2;
        for (int i= 2; i <= n; i++)
        {
            int k = n / i;
            int curr_sum = i * k * (k + 1) / 2;
            if (curr_sum > sum)
            {
                sum = curr_sum;
                y = i;
            }
        }
        cout << y << endl;
    }
    return 0;
}