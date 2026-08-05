#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // Write your code here
      int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> words(n);
        vector<int> qualities(n);
        int winnerIndex = -1;
 
        for (int i = 0; i < n; ++i) {
            cin >> words[i] >> qualities[i];
            if (words[i] <= 10 && (winnerIndex == -1 || qualities[i] > qualities[winnerIndex])) {
                winnerIndex = i;
            }
        }
 
        cout << (winnerIndex + 1) << endl;
    }
    return 0;
}