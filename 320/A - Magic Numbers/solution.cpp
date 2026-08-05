#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string number;
    cin >> number;
 
    bool isMagical = true;
    for (int i = 0; i < number.size(); i++)
    {
        if (number[i] != '1' && number[i] != '4')
        {
            isMagical = false;
            break;
        }
    }
 
    if (number[0] == '4')
        isMagical = false;
 
    if (number.find("444") != number.npos)
        isMagical = false;
 
    if (isMagical)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
    return 0;
}