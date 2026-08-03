#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
 
    int n, c = 0, temp;
    scanf("%d", &n);
    int a[250];
    int p, q;
    scanf("%d", &p);
    for (int i = 0; i < p; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &q);
    for (int i = p; i < p + q; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < p + q - 1; i++)
    {
        for (int j = 0; j < p + q - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < p + q; i++)
    {
        if (a[i] != a[i + 1])
            c++;
    }
    if (c == (n))
    {
        printf("I become the guy.
");
    }
    else
    {
        printf("Oh, my keyboard!
");
    }
 
    return 0;
}