#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a = 0, b = 1;
    for (int i = 1; i < n; i++) {
        int next = a + b;
        a = b;
        b = next;
    }
    printf("%d\n", a);

    return 0;
}