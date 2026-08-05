#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
     int y,z;
     cin>>y>>z;
      string prob[7] = {"", "1/1", "5/6", "2/3", "1/2", "1/3", "1/6"};
    int a = max(y,z);
    cout << prob[a] << endl;
    return 0;
}