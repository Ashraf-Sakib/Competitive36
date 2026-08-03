#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
 
    int a, b, c, a1, a2, a3, a4, a5;
    scanf("%d%d%d", &a, &b, &c);
    a1 = a + b * c;
    a2 = a * (b + c);
    a3 = a * b * c;
    a4 = (a + b) * c;
    a5 = a + b + c;
    int s[5] = {a1, a2, a3, a4,a5};
    int max = s[0];
    for (int i = 0; i < 5; i++)
    {
        if (s[i] > max)
            max = s[i];
    }
    printf("%d
", max);
    return 0;
}