#include <stdio.h>

int main() {
    int num, product = 1, originalNum, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    while (num > 0) {
        digit = num % 10;
        product = product * digit;
        num = num / 10;
    }
    
    printf("The product of digits of %d is: %d\n", originalNum, product);
    
    return 0;
}