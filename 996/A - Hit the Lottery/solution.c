#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    
   int n,f=0;
   scanf("%d",&n);
   int a[5]={100,20,10,5,1};
   for(int i=0;i<5;i++)
   {
    f=f+n/a[i];
    n=n%a[i];
 
   }
   printf("%d
",f);
 
    return 0;
}