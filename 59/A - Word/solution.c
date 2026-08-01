#include<stdio.h>
#include<string.h>
void capital(char s[100])
{
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='a')
            s[i]='A'+(s[i]-'a');
 
    }
}
void small(char s[100])
{
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]='a'+(s[i]-'A');
    }
 
}
 
int main()
{
    int i,len,a=0,b=0;
    char s[100];
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='a')
            a++;
        else
            b++;
    }
 
    if(b>a)
        capital(s);
    else
        small(s);
    printf("%s",s);
 
    return 0;
 
}