#include<stdio.h>
int main()
{
    int a,n,h,w=0;;
    scanf("%d%d",&n,&h);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a>h)
        {
            w=w+2;
        }
        else
        {
            w=w+1;
        }
    }
    printf("%d",w);
    return 0;
}