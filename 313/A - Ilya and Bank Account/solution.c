#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    
   int n;
   scanf("%d",&n);
   if(n>0)
   {
    printf("%d
",n);
   } 
   else
   {
     int a = n / 10;
        int b = n / 100 * 10 + n % 10;
        if(a>b)
        {
            printf("%d
",a);
        }
        else
        {
            printf("%d
",b);
        }
   }
    return 0;
}