#include <stdio.h>

int fibonacci(int n) {
    if(n <= 0) return 0;
    if(n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("Fibonacci at position 6: %d\n", fibonacci(6));
    return 0;
}