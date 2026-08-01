#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,a=0,d=0,len;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    len=strlen(s);
    for(i=0; i<len; i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='D')
            d++;
    }
    if(a>d)
        printf("Anton");
    else if(d>a)
        printf("Danik");
    else
        printf("Friendship");
 
 
    return 0;
 
}