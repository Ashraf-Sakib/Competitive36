#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[11] = "codeforces";
    char str[11];
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%s",str);
 
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != str[i])
            {
                count++;
            }
        }
 
        printf(" %d
", count);
    }
 
    return 0;
}