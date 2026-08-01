#include<stdio.h>
#include<string.h>
int main()
{
    int i,j=0,a=0;
    char s[100];
    char t[5]="hello";
    gets(s);
 
    for(i=0; i<5; i++)
    {
        while(s[j]!='\0')
        {
            if(t[i]==s[j])
            {
                a++;
                j++;
                break;
            }
            else
                j++;
        }
    }
 
 
    if(a==5)
        printf("YES");
    else
        printf("NO");
    return 0;
 
}