#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
 
   char p[100];
   int len,c=0;
 
   scanf("%s",p);
   len=strlen(p);
   for(int i=0;i<len;i++)
   {
    if(p[i]=='H'||p[i]=='Q'||p[i]=='9')
    {
        c++;
 
    }
 
   }
   if(c!=0)
   printf("YES
");
   else
   printf("NO
");
    return 0;
}