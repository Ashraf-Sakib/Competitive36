#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
 
   int n,c=0;
   scanf("%d",&n);
   int a[100];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   int max=0,min=101,si,bi;
   for(int i=0;i<n;i++)
   {
    if(a[i]>max)
    {
        max=a[i];
        bi=i;
    }
    if(a[i]<=min)
    {
        min=a[i];
        si=i;
    }
   }
   if(bi>si)
   {
       si++;
   }
   
   int ur=(n-1)+bi-si;
   printf("%d
",ur);
    return 0;
}