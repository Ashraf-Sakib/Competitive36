#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    
   int n;
   scanf("%d",&n);
   int h[n],a[n];
   int num=0;
   for(int i=0;i<n;i++)
   {
   scanf("%d%d",&h[i],&a[i]);
   for(int j=0;j<i;j++)
{
    if (h[i] == a[j])
            {
                num += 1;
            }
            if (a[i] == h[j])
            {
                num += 1;
            }
}
   } 
   printf("%d
",num);
    return 0;
}