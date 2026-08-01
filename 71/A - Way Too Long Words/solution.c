#include<stdio.h>
#include<string.h>
int main()
{
    int t,len;;
    char s[100];
    scanf("%d",&t);
    for(int i=0;i<=t;i++)
    {
        gets(s);
        len=strlen(s);
        if(len>10)
        printf("%c%d%c
",s[0],len-2,s[len-1]);
        else
        printf("%s
",s);
        
    }
    return 0;
}