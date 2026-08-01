#include<stdio.h>
#include<string.h>
void capital(char s[100])
{  int len=strlen(s);
    for(int i=0;i<len;i++)
    {
        if(s[i]>='a')
            s[i]=s[i]-32;
    }
}
int main()
{ char s[100],a[100];
gets(s);
gets(a);
 
capital(s);
capital(a);
int i=strcmp(s,a);
printf("%d",i);
return 0;
 
}