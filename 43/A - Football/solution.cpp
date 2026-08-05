#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    cin >> n;
 
    unordered_map<string, int> goals;
    string team, winner;
 
    for (int i = 0; i < n; i++)
    {
        cin >> team;
        goals[team]++;
        if (i == 0 || goals[team] > goals[winner])
        {
            winner = team;
        }
    }
 
    cout << winner << endl;
    return 0;
}