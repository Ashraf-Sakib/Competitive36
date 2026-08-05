#include <bits/stdc++.h>
using namespace std;
 
class Dragon
{
public:
    int X;
    int Y;
};
 
bool comp(Dragon a, Dragon b)
{
    return a.X < b.X;
}
 
int main()
{
    int S, N;
    Dragon D[1000];
    cin >> S >> N;
    for (int i = 0; i < N; ++i)
    {
        cin >> D[i].X >> D[i].Y;
    }
 
    sort(D, D + N, comp);
 
    bool win = true;
    for (int i = 0; i < N; ++i)
    {
        if (S <= D[i].X)
        {
            win = false;
            break;
        }
 
        S += D[i].Y;
    }
 
    if (win == true)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
    return 0;
}