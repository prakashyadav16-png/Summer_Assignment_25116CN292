#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    int count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    return 0;
}