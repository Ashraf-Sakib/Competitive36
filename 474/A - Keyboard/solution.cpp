#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
    string dir, str, kb = "qwertyuiopasdfghjkl;zxcvbnm,./", res;
    cin >> dir >> str;
 
    if (dir == "L")
    {
        for (int i = 0; i < str.length(); i++)
            res += kb[kb.find(str[i]) + 1];
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
            res += kb[kb.find(str[i]) - 1];
    }
    cout<<res<<endl;
    return 0;
}