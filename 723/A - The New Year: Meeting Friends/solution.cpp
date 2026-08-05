#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
 
    int max_val = max(max(a, b), c);
    int min_val = min(min(a, b), c);
 
 
    int range = max_val - min_val;
 
    cout << range << endl;
 
    return 0;
}