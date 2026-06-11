#include <stdio.h>

int main() {
    int n = 145, temp = n, sum = 0;
    
    while(temp > 0) {
        int digit = temp % 10;
        
        // Find factorial of the digit
        int fact = 1;
        for(int i = 1; i <= digit; i++) {
            fact *= i;
        }
        
        sum += fact;
        temp /= 10;
    }
    
    if(sum == n)
        printf("%d is a Strong Number\n", n);
    else
        printf("%d is not a Strong Number\n", n);
        
    return 0;
}