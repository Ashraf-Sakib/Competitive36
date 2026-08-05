#include <stdio.h>
 
int main() {
    char line[1000];
    fgets(line, sizeof(line), stdin);
 
    int count = 0;
    int letters[26] = {0}; 
 
    for (int i = 0; line[i] != '}'; i++) {
        if (line[i] >= 'a' && line[i] <= 'z') {
            int index = line[i] - 'a';
            if (letters[index] == 0) {
                letters[index] = 1; 
                count++;
            }
        }
    }
 
    printf("%d
", count);
    return 0;
}