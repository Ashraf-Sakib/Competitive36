#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    int max_val = *max_element(arr, arr + n);
    int min_val = *min_element(arr, arr + n);
    long long a = 0, b = 0;
 
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max_val)
        {
            a++;
        }
        if (arr[i] == min_val)
        {
            b++;
        }
    }
 
    cout << static_cast<long long>(max_val - min_val) << " ";
    
    if (max_val == min_val)
    {
        cout << n * (n - 1LL) / 2 << endl;
    }
    else
    {
        cout << a * b << endl;
    }
 
    return 0;
}