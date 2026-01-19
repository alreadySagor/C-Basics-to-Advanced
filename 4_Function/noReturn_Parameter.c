#include <stdio.h>

int sum(int a, int b) {
    printf("Sum is : %d\n", a + b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    return 0;
}