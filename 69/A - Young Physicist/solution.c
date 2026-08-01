#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][3];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x=0,y=0,z=0;
    for(i=0;i<n;i++){
        x+=a[i][0];
        y+=a[i][1];
        z+=a[i][2];
    }
    if(x==0 &&  y==0 && z == 0){
        printf("YES");
    }else printf("NO");
 
 
return 0;
}