#include <stdio.h>

int main() {
    int binary = 1010;
    int decimal = 0, base = 1, temp = binary;
    
    while(temp > 0) {
        int last_digit = temp % 10;
        decimal += last_digit * base;
        base = base * 2;
        temp /= 10;
    }
    
    printf("Decimal of %d is: %d\n", binary, decimal);
    return 0;
}