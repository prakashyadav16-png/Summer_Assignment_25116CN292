#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int num1 = a;
    int num2 = b;
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    int gcd = num1;
    int lcm = (a * b) / gcd;
    printf("%d\n", lcm);
    return 0;
}