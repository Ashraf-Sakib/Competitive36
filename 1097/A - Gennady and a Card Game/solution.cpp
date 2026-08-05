#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    // Write your code here
    string s;
    cin >> s;
    cin.ignore();
    string arr[5];
    for (int i = 0; i < 5; i++)
    {
        getline(cin, arr[i]);
    }
    bool flag = false;
    for (char c : s)
    {
        for (int i = 0; i < 5; i++)
        {
            if (arr[i].find(c) != string::npos)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}