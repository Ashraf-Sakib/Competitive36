#include<stdio.h>
#include<string.h>
int main()
{
    int i,len;
    char s[1000];
    gets(s);
    if(s[0]>='a'&&s[0]<='z')
        s[0]='A'+(s[0]-'a');
 
    printf("%s",s);
    return 0;
}