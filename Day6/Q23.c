#include <stdio.h>

int main() {
    int n = 13; // Binary: 1101
    int count = 0;
    
    while(n > 0) {
        if(n % 2 == 1) {
            count++;
        }
        n /= 2;
    }
    
    printf("Number of set bits: %d\n", count);
    return 0;
}