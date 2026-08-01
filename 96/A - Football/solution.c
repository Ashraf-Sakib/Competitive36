#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char a[100];
    scanf("%s",a);
    int s=strlen(a);
    int i,c=0,z;
    for(i=0;i<s;i++){
        if(a[i]== a[i+1]){
            c++;
        }else c=0;
 
        if(c==6){
          z=  printf("YES");
          break;
        }
 
    }
    if(z != 3) printf("NO");
 
return 0;
}