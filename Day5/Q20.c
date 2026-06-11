#include <stdio.h>

int main() {
    int n = 42;
    int max_prime = -1;
    
   
    while(n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }
    
    
    for(int i = 3; i * i <= n; i += 2) {
        while(n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }
    
    
    if(n > 2) {
        max_prime = n;
    }
    
    printf("Largest Prime Factor is: %d\n", max_prime);
    return 0;
}