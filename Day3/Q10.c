#include <stdio.h>
int main() {
    int lower, upper;
    scanf("%d %d", &lower, &upper);
    for (int i = lower; i <= upper; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("%d ", i);
        }
    }
    return 0;
}