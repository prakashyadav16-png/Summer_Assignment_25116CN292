#include <stdio.h>

int main() {
    int num, reversed = 0, originalNum, digit;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    while (num > 0) {
        digit = num % 10;
        reversed = (reversed * 10) + digit;
        num = num / 10;
    }
    
    if (originalNum == reversed) {
        printf("%d is a Palindrome number.\n", originalNum);
    } else {
        printf("%d is NOT a Palindrome number.\n", originalNum);
    }
    
    return 0;
}