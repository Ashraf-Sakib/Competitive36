#include<stdio.h>
int main()
{
    int n,p,q,a=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&p,&q);
        if(p!=q&&q-p>=2)
        a++;
 
    }
    printf("%d
",a);
    return 0;
}