#include<stdio.h>
int main()
{
    int n,a[100],i,m=0,t=0,c=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
 
        scanf("%d",&a[i]);
         t=t+a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]<a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
 
            }
        }
    }
 
 
    for(int i=0;i<=(n-1);i++){
        m+=a[i];
        c++;
        if(m>t/2)
          break;
 
    }
    printf("%d
",c);
    return 0;
}