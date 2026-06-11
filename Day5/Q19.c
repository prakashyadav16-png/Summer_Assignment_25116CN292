#include <stdio.h>

int main() {
    int n = 24;
    printf("Factors of %d are: ", n);
    
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}