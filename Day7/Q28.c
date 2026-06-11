#include <stdio.h>

int reverse_recur(int n, int rev) {
    if(n == 0) return rev;
    return reverse_recur(n / 10, rev * 10 + (n % 10));
}

int main() {
    printf("Reversed Number: %d\n", reverse_recur(1234, 0));
    return 0;
}