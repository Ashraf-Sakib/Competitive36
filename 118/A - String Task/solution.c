#include <stdio.h>
#include<string.h>
int main() {
    char s[100];
    int i,j;
    gets(s);
    int len=strlen(s);
    for(int i=0;s[i]!='\0';i++)
    {  if(s[i]>='A'&&s[i]<='Z')
    {
        s[i]='a'+(s[i]-'A');
    }
       if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
       {
           for(j=i;j<len;j++)
           {
               s[j]=s[j+1];
           }
           i--;
           len--;
       }
       s[len+1]='\0';
       
    }
    for(i=0;i<len;i++)
    {
        printf(".%c",s[i]);
    }
    return 0;
}