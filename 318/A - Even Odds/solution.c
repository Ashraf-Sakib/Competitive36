#include <stdio.h>
 
int main() {
    
    long long n,k;
    scanf("%llu%llu",&n,&k);
    if((n+1)/2>=k)
    printf("%llu
",2*k-1);
    else
    printf("%llu
",2*(k-(n+1)/2));
 
    return 0;
}