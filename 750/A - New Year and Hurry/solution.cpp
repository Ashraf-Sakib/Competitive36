#include <bits/stdc++.h>
using namespace std;
//using binary search algorithm:3
int main()
{
    int n, k;
    cin >> n >> k;
 
    int time = 240; // min
    int left = 1, right = n;
    int result = 0;
 
    while (left <= right)
    {
        int mid = (left + right) / 2; // 
        int total_time = (5 * mid * (mid + 1)) / 2; 
 
        if (total_time <= time - k) 
        {
            result = mid; 
            left = mid + 1; 
        }
        else
        {
            right = mid - 1; 
        }
    }
 
    cout << result << endl;
 
    return 0;
}