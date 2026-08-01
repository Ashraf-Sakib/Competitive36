#include<stdio.h>
int main()
{
    int k,w,n,b,i,t=0;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        t=t+i*k;
    }
    b=t-n;
    if(b>0)
    printf("%d",b);
    else
        printf("0");
 
    return 0;
 
 
}