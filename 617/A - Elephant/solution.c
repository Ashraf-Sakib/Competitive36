#include<stdio.h>
int main()
{
    int x,ms,a1,a2,a3,a4,a5;
    scanf("%d",&x);
    if(x>0)
    {
 
        a5=x/5;
        x=x%5;
        a4=x/4;
        x=x%4;
        a3=x/3;
        x=x%3;
        a2=x/2;
        x=x%2;
        a1=x;
 
 
        ms=a5+a4+a3+a2+a1;
        printf("%d",ms);
    }
    return 0;
}
 