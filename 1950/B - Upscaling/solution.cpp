#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        cin >> n;
        int sz = 2 * n;
        vector<vector<char>> board(sz, vector<char>(sz));
 
        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                if ((i/2+ j/2) % 2 == 0)
                {
                    board[i][j] = '#';
                }
                else
                {
                    board[i][j] = '.';
                }
            }
        }
 
        for (int i = 0; i < sz; i++)
        {
            for (int j = 0; j < sz; j++)
            {
                cout << board[i][j];
            }
            cout << endl;
        }
    }
 
    return 0;
}