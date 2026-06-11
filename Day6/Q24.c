#include <stdio.h>

int main() {
    double x = 2.0;
    int n = 10;
    double result = 1.0;
    int abs_n = n < 0 ? -n : n;
    
    for(int i = 1; i <= abs_n; i++) {
        result *= x;
    }
    
    if(n < 0) {
        result = 1.0 / result;
    }
    
    printf("%.2f^%d = %.2f\n", x, n, result);
    return 0;
}