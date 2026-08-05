#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Write your code here
    int n;
    cin >> n;
 
    vector<int> piles(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> piles[i];
        if (i > 0)
        {
            piles[i] += piles[i - 1];
        }
    }
 
    int m;
    cin >> m;
 
    vector<int> juicyWorms(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> juicyWorms[i];
    }
 
    for (int i = 0; i < m; ++i)
    {
        int juicyWorm = juicyWorms[i];
 
        int left = 0, right = n - 1;
        while (left < right)
        {
            int mid =  (right + left) / 2;
            if (piles[mid] < juicyWorm)
            {
                left = mid + 1;
            }
            else
            {
                right = mid;
            }
        }
 
        cout << left + 1 << endl;
    }
 
    return 0;
}