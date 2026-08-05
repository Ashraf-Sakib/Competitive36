#include <bits/stdc++.h>
using namespace std;
 
int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        n &= (n - 1);
        count++;
    }
    return count;
}
int main()
{
 
    // Write your code here
    int x;
    cin >> x;
 
    int ans = countSetBits(x);
    cout << ans << endl;
 
    return 0;
}