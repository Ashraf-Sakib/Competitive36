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
       scanf("%d",&a[i]);}
       for(int i=0;i<n;i++){
    if(a[i]==1)
    {
        c++;
    }
 
   }
   if(c>0)
   {
       printf("HARD");
   }
   else
   {
       printf("EASY");
   }
    return 0;
}