#include<stdio.h>
int main()
{
    int n,a=0;
    scanf("%d",&n);
    char s[100];
    scanf("%s",s);
 
    for(int i=0; i<n; i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
            s[i]='a'+(s[i]-'A');
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] > s[j])
            {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
 
        if(s[i]!=s[i+1])
            a++;
    }
    if(a==26)
        printf("YES
");
    else
        printf("NO");
    return 0;
}