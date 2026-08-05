#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    
   int t;
   scanf("%d",&t);
   while(t--)
   {
    char s[50];
    scanf("%s",s);
    int len=strlen(s);
    int f=0;
    for(int i=1;i<len;i++)
    {
        if(s[i]!=s[0])
        {
          f=1;
          break;
        }
        else
        {
            f=0;
        }
    }
    if(f==0)
    {
        printf("-1
");
    }
    else
    {
        printf("%d
",len-1);
    }
   } 
    return 0;
}