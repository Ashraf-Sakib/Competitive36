#include <stdio.h>
 
int main() {
    int t, n;
 
    scanf("%d", &t);
 
    while (t--) {
        scanf("%d", &n);
 
        int max_len = 0;
        int curr_len = 0;
 
        for (int i = 0; i < n; i++) {
            int a;
            scanf("%d", &a);
 
            if (a == 0) {
                curr_len++;
            } else {
                if (curr_len > max_len) {
                    max_len = curr_len;
                }
                curr_len = 0;
            }
        }
 
        if (curr_len > max_len) {
            max_len = curr_len;
        }
 
        printf("%d
", max_len);
    }
 
    return 0;
}