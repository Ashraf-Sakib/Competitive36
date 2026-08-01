#include<stdio.h>
#include<string.h>
 
int main()
{
    int i,j;
    char s[101],a[101];
    gets(s);
    gets(a);
    i=strcmp(a,strrev(s));
    if(i==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}