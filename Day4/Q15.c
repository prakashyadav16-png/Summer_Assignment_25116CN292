#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int originalNum = num;
    int temp = num;
    int digits = 0;
    int sum = 0;
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }
    temp = num;
    while (temp != 0) {
        int remainder = temp % 10;
        
        int power = 1;
        for (int i = 1; i <= digits; i++) {
            power = power * remainder;
        }
        sum = sum + power;
        temp = temp / 10;
    }
    if (sum == originalNum) {
        printf("Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }
    return 0;
}