#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    
   int n;
   scanf("%d",&n);
   int m,c;
   int a=0,b=0;
   for(int i=0;i<n;i++)
   {  
    scanf("%d%d",&m,&c);
    if(m>c)
    {
        a++;
    }
    else if(c>m)
    {
        b++;
    }
    }
    if(a>b)
    {
        printf("Mishka
");
    } 
    else if(a<b)
    {
        printf("Chris
");
    }
    else
    printf("Friendship is magic!^^
");
   
    return 0;
}