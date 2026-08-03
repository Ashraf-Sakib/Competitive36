#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    
   int m,k,l,n,d,mc=0,c=0;
   scanf("%d%d%d%d%d",&m,&k,&l,&n,&d);
   for(int i=1;i<=d;i++)
   {
    if(i%m==0||i%l==0||i%k==0||i%n==0)
    {
        c++;
    }
   } 
   printf("%d
",c);
    return 0;
}