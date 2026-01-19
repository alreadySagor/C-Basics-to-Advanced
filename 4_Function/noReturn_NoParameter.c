#include <stdio.h>

int sum() {
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("Sum is : %d\n", sum);
}

int main() {
    sum();
    return 0;
}