#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    int n;
    cin >> n;
    string a;
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        a.push_back(ch);
    }
    // cout<<a<<endl;
    //int max_count = 0;
    int count_1 = 0;
    int count_0 = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            count_1++;
        }
        else
        {
            count_0++;
        }
    }
    cout << abs(count_0 - count_1) << endl;
    return 0;
}