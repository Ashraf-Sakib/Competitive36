#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    
   int t,d=0,r=0;
   scanf("%d",&t);
   long long a,b;
   for(int i=0;i<t;i++)
   {
    scanf("%llu%llu",&a,&b);
    if(a%b==0)
    {
        printf("0
");
        continue;
    }
    d=a/b;
    r=(d+1)*b;
    printf("%d
",r-a);
   } 
    return 0;
}