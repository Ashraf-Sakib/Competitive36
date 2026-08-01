#include<stdio.h>
int main()
{
    int n,a,b,max=0,r=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        r=r-a;
        r=r+b;
        if(max<r)
        max=r;
        
    }
    printf("%d
",max);
    return 0;
}