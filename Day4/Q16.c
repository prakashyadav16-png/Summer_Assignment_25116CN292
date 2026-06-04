#include <stdio.h>
int main() {
    int lower, upper;
    scanf("%d %d", &lower, &upper);
    for (int i = lower; i <= upper; i++) {
        int originalNum = i;
        int temp = i;
        int digits = 0;
        int sum = 0;
        while (temp != 0) {
            digits++;
            temp = temp / 10;
        }
        temp = i;
        while (temp != 0) {
            int remainder = temp % 10;
            int power = 1;
            for (int j = 1; j <= digits; j++) {
                power = power * remainder;
            }
            sum = sum + power;
            temp = temp / 10;
        }

        if (sum == originalNum) {
            printf("%d ", i);
        }
    }
    return 0;
}