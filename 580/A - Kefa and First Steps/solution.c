#include <stdio.h>
 
int main()
{
    int n;
    scanf("%d", &n);
    int a[100000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
 
    int start = 0;
    int end = 0;
    int maxLength = 1;
    int currentLength = 1;
 
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            end = i;
            currentLength++;
        }
        else
        {
 
            if (currentLength > maxLength)
            {
                maxLength = currentLength;
            }
            start = end = i;
            currentLength = 1;
        }
    }
 
    if (currentLength > maxLength)
    {
        maxLength = currentLength;
    }
 
    printf("%d
", maxLength);
 
    return 0;
}