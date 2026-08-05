#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    
   char s[200];
   int f=1;
   gets(s);
   for(int i=0;s[i]!='\0';i++)
   {
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    {
     i=i+2;
     if(!f)
     {
        printf(" ");
        
     }
     continue;
    }
    else
    {
        f=0;
        printf("%c",s[i]);
    }
   } 
    return 0;
}